// Strings -> Q 16 : Enter a string and a character from the user, then print the character's index if it exists; otherwise, print -1.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;
    char srch;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("Enter the Charachter to search -> ");
    scanf("%c",&srch);

    printf("The String you entered -> %s\n",str);
    printf("The Char   you entered -> %c\n",srch);

    for (int j = 0 ; j < i; j ++){
        if (str[j] ==  srch ){
            printf("Found at index pos -> %d",j);
            return 1;
        }
    }
    
    printf("Not Fouund , -1\n");
    
    return 0;
}
