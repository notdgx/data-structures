// Strings -> Q 09 : Enter a string from the user and copy it into another string variable.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char str2[STR_SIZE];
    int i,j;

    printf("Enter the string 1 -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for( j = 0 ; j < i;j++){
        str2[j] = str[j];
    }
    str2[j] ='\0';


    printf("The String you entered -> %s\n",str);
    printf("The String copied as   -> %s\n",str2);

    return 0;
}
