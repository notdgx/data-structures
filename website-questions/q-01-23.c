// Strings -> Q 23 : Enter a sentence and a word from the user, then count the occurrences of that word in the sentence.


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char word[STR_SIZE/4];

    int i,j,flag = 0,count = 0;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("Enter the word   -> ") ;
    for(j = 0 ; j < STR_SIZE/4 -1;j++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        word[j] = ch;
    }
    word[j] ='\0';int word_len = strlen(word);

    if (word_len > 0) {
        for (int k = 0; k <= i - word_len; k++) {

            if (strncmp(&str[k], word, word_len) == 0) {

                if (k == 0 || str[k - 1] == ' ' ||
                    str[k - 1] == '\t') {

                    if (str[k + word_len] == '\0' ||
                        str[k + word_len] == ' ' ||
                        str[k + word_len] == '\t' ||
                        str[k + word_len] == '.' ||
                        str[k + word_len] == ',' ||
                        str[k + word_len] == '!' ||
                        str[k + word_len] == '?' ||
                        str[k + word_len] == ';' ||
                        str[k + word_len] == ':') {

                        count++;
                    }
                }
            }
        }
    }

    printf("The String you entered -> %s\n",str);
    printf("The Word   you entered -> %s\n",word);
    printf("The Occurance of Word  -> %d\n",count);


    return 0;
}
