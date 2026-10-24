

#!/usr/bin/env python3

import json
import re
import sys
from pathlib import Path

BASE_DIR = Path(__file__).resolve().parent
QUESTIONS_FILE = BASE_DIR / "questions.md"
OUTPUT_JSON = BASE_DIR / "output.json"
OUTPUT_MD = BASE_DIR / "question_d.md"

# Matches question IDs such as q-00-01, q-00-01.c, or q-00-01.cpp.
QUESTION_ID_RE = re.compile(
    r"(?<![A-Za-z0-9])q[-_](\d+)[-_](\d+)(?:\.(?:c|cpp))?",
    re.IGNORECASE,
)

QUESTION_LINE_RE = re.compile(r"^(\s*)(\d+)\.\s+(.*)$")


def collect_strings(value):
    """Collect strings recursively, including JSON object keys."""
    if isinstance(value, dict):
        for key, item in value.items():
            yield str(key)
            yield from collect_strings(item)
    elif isinstance(value, list):
        for item in value:
            yield from collect_strings(item)
    elif isinstance(value, str):
        yield value


def main():
    if not QUESTIONS_FILE.is_file():
        sys.exit(f"Missing source file: {QUESTIONS_FILE}")

    if not OUTPUT_JSON.is_file():
        sys.exit(f"Missing JSON file: {OUTPUT_JSON}")

    try:
        source_text = QUESTIONS_FILE.read_text(encoding="utf-8")
        json_data = json.loads(OUTPUT_JSON.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError) as error:
        sys.exit(f"Could not read input files: {error}")

    # Find question IDs recorded anywhere in output.json.
    completed_ids = set()

    for value in collect_strings(json_data):
        for match in QUESTION_ID_RE.finditer(value):
            topic_id = int(match.group(1))
            question_id = int(match.group(2))
            completed_ids.add((topic_id, question_id))

    output_lines = []
    topic_index = -1
    question_count = 0

    for line in source_text.splitlines():
        # Preserve topic headings and their original names.
        if line.startswith("# "):
            topic_index += 1
            question_count = 0
            output_lines.append(line)
            output_lines.append("")
            continue

        match = QUESTION_LINE_RE.match(line)

        if match and topic_index >= 0:
            indent, number_text, question_text = match.groups()
            question_number = int(number_text)
            question_count = max(question_count, question_number)

            # Remove any old status marker so repeated runs stay clean.
            question_text = re.sub(
                r"^(?:✅|❌)\s*:?\s*",
                "",
                question_text,
            )

            question_id = (topic_index, question_number)
            status = "✅" if question_id in completed_ids else "❌"

            output_lines.append(
                f"{indent}{number_text}. {status} : {question_text}"
            )
        else:
            output_lines.append(line)

    content = "\n".join(output_lines) + "\n"

    try:
        OUTPUT_MD.write_text(content, encoding="utf-8")
    except OSError as error:
        sys.exit(f"Could not update question_d.md: {error}")

    print("question_d updated")


if __name__ == "__main__":
    main()

