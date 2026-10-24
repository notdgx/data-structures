// Strings -> Q 05 : Enter a string from the user and convert it into toggle case.

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

    for(i = 0; i < s-1 ; i++){
        if (str[i]>='a' && str[i]<='z'){
                str[i] -= 32; 

        }
        else if (str[i]>='A' && str[i]<='Z'){
                str[i] += 32;
        }

    }

    printf("The String you entered in Toggle  case -> %s",str);
    
    return 0;
}
