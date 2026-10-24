// Strings -> Q 18 : Enter a string from the user and convert it into an integer.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;
    int value = 0;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        if (!(ch>='0' && ch<='9')){
            printf("Non Integer char\n");
            return 0;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for (int j = 0 ; j < i ; j++){
        value = value* 10 + (str[j] - '0');
    }
    
    printf("The String you entered -> %s\n",str);
    printf("The Integer value become -> %d\n",value);

    return 0;
}
