// Strings -> Q 24 : Enter a sentence and a word from the user, then replace the first occurrence of that word with another word.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100

int main()
{
    char str[STR_SIZE], ch;
    char word[STR_SIZE / 4];
    char newword[STR_SIZE / 4];
    char result[STR_SIZE * 2];

    int i, j, k, p;
    int word_len, newword_len;
    int flag, found = 0;


    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("Enter the word to replace  -> ") ;
    for(j = 0 ; j < STR_SIZE/4 -1;j++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        word[j] = ch;
    }
    word[j] ='\0';

    printf("Enter the new word  -> ");
    for (k = 0; k < STR_SIZE / 4 - 1; k++) {
        ch = getchar();
        if (ch == '\n'){
            break;
        }
        newword[k] = ch;
    }
    newword[k] = '\0';

    word_len = strlen(word);
    newword_len = strlen(newword);

    k = 0;

    for (i = 0; str[i] != '\0'; ) {
        flag = 0;
        if (word_len > 0 &&
            strncmp(&str[i], word, word_len) == 0) {
            if ((i == 0 || str[i - 1] == ' ' ||
                 str[i - 1] == '\t') &&
                (str[i + word_len] == '\0' ||
                 str[i + word_len] == ' ' ||
                 str[i + word_len] == '\t' ||
                 str[i + word_len] == '.' ||
                 str[i + word_len] == ',' ||
                 str[i + word_len] == '!' ||
                 str[i + word_len] == '?' ||
                 str[i + word_len] == ';' ||
                 str[i + word_len] == ':')) {
                flag = 1;
            }
        }

        if (flag == 1 && found == 0) {
            for (p = 0; p < newword_len; p++) {
                result[k++] = newword[p];
            }

            i += word_len;
            found = 1;
        }
        else {
            result[k++] = str[i];
            i++;
        }
    }

    result[k] = '\0';

    printf("The String you entered -> %s\n",str);
    printf("The String after replaceemnt  -> %s\n",str);

    return 0;
}