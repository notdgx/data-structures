// Strings -> Q 12 : Enter a string from the user and print each character on a new line.
#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("Each element in new line -> \n") ;
    for (int j = 0 ; j < i ; j++){
        printf("%c\n",str[j]);
    }


    return 0;
}
