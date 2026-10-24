// Strings -> Q 11 : Enter a string from the user and check whether it is a palindrome.
#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char str2[STR_SIZE];
    int i,j;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    for(j= 0 ; j<i ; j++){
        str2[i-j-1] = str[j];
    }
    str2[i] ='\0';

    printf("The String you entered -> %s\n",str);
    printf("The String reverse     -> %s\n",str2);
    if (strcmp(str,str2) == 1){
        printf("Not a palindrome\n");
    }
    else{
        printf("A palindrome\n");
    }

    
    
    return 0;
}
