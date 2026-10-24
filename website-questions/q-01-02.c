// Strings -> Q 02 : Enter a string from the user and convert it to lowercase.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[10],ch;
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

    for(i = 0; i < s-1 ; i++){
        if (str[i] >= 65 && str[i] <= 90 ){
            str[i] = str[i] + 32;
        }
    }

    printf("The String you entered in lowercase -> %s",str);
    
    return 0;
}
