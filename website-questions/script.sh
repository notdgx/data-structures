#!/bin/sh
# Create one C starter file for every numbered question in a Markdown file.
# Run from the directory where output files should be created:
#   sh create-question-files.sh [path/to/questions.md]

set -eu

input=${1:-questions.md}

if [ ! -f "$input" ]; then
    printf 'Error: input file not found: %s\n' "$input" >&2
    printf 'Usage: sh create-question-files.sh [path/to/questions.md]\n' >&2
    exit 1
fi

tmp_records=$(mktemp "${TMPDIR:-/tmp}/question-files-records.XXXXXX")
tmp_names=$(mktemp "${TMPDIR:-/tmp}/question-files-names.XXXXXX")
trap 'rm -f "$tmp_records" "$tmp_names"' 0
trap 'exit 1' HUP INT TERM

# Parse each top-level heading as a topic, then collect numbered questions.
# The question text is kept verbatim after the Markdown list-number prefix.
if ! awk '
{
    sub(/\r$/, "", $0)
}
/^#[[:space:]]+/ {
    topic = $0
    sub(/^#[[:space:]]+/, "", topic)
    topic_count++
    topic_id = sprintf("%02d", topic_count - 1)
    question_count = 0
    next
}
topic != "" && /^[[:space:]]*[0-9]+\.[[:space:]]+/ {
    question = $0
    sub(/^[[:space:]]*[0-9]+\.[[:space:]]+/, "", question)
    question_count++
    question_id = sprintf("%02d", question_count)
    printf "%s\t%s\t%s\t%s\n", topic_id, topic, question_id, question
    total++
}
END {
    if (topic_count == 0) {
        print "Error: no top-level topic headings (lines beginning with # ) found." > "/dev/stderr"
        exit 1
    }
    if (total == 0) {
        print "Error: no numbered questions found." > "/dev/stderr"
        exit 1
    }
}
' "$input" > "$tmp_records"; then
    exit 1
fi

awk -F '\t' '{ print "q-" $1 "-" $3 ".c" }' "$tmp_records" > "$tmp_names"

# Abort before creating anything if one or more target files already exist.
while IFS= read -r name; do
    if [ -e "$name" ]; then
        printf 'Error: refusing to overwrite existing file: %s\n' "$name" >&2
        printf 'Move or rename the existing file(s), then run the script again.\n' >&2
        exit 1
    fi
done < "$tmp_names"

# Shell noclobber adds a second guard against accidentally overwriting files.
set -C
tab=$(printf '\t')
created=0
while IFS="$tab" read -r topic_id topic question_id question; do
    name="q-${topic_id}-${question_id}.c"
    {
        printf '// %s -> Q %s : %s\n' "$topic" "$question_id" "$question"
        printf '\n#include <stdio.h>\n\nint main(){\n\n\n\n    return 0;\n}\n'
    } > "$name"
    created=$((created + 1))
done < "$tmp_records"

printf 'Created %s C files in: %s\n' "$created" "$PWD"
printf 'Naming: q-NN-KK.c (NN = topic number from 00; KK = question number from 01).\n'


