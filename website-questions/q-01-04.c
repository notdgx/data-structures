// Strings -> Q 04 : Enter a string from the user and convert it into title case.

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

    int flag = 0;
    for(i = 0; i < s-1 ; i++){
        if (str[i]>='a' && str[i]<='z'){
            if (flag == 0){
                flag = 1;
                str[i] -= 32; 
            }
        }
        else if (str[i]>='A' && str[i]<='Z'){
            if (flag == 0){
                flag = 1;
            }
            else {
                str[i] += 32;
            }
        }

    }

    printf("The String you entered in Title  case -> %s",str);
    
    return 0;
}
