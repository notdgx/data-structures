// Strings -> Q 06 : Enter a string from the user and find its length.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[100],ch;
    int s = sizeof(str)/sizeof(str[0]) , i;
    printf("Enter the string -> ") ;
    for(i = 0 ; i < s-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    printf("The String you entered -> ");
    int length = printf("%s",str);
    printf("\nLength of the string is -> %d",length);
    
    return 0;
}
