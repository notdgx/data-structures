// Strings -> Q 20 : Enter a string from the user and count the number of characters, words, spaces, and lines.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;
    int c_count = 0;
    int w_count = 0;
    int s_count = 0;
    int l_count = 0;

    int in_word = 0;

    printf("Enter the string, enter ` when done enterin -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '`'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    for (int j = 0; j < i; j++) {
        c_count++;

        if (str[j] == ' ') {
            s_count++;
        }

        if (str[j] == '\n') {
            l_count++;
        }

        if (str[j] != ' ' && str[j] != '\n' && str[j] != '\t') {
            if (in_word == 0) {
                w_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    printf("The string you entered:\n%s\n", str);
    printf("Characters: %d\n", c_count);
    printf("Words: %d\n", w_count);
    printf("Spaces: %d\n", s_count);
    printf("Lines: %d\n", l_count + (i > 0 && str[i - 1] != '\n'));

    return 0;
}