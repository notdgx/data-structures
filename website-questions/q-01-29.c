// Strings -> Q 29 : Enter a string from the user and convert its characters into their ASCII values in an integer array (e.g., 10 characters).

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int arr[STR_SIZE];
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

    for(int j = 0 ; j < i ; j++){
        arr[j] = (str[j]);
    }
    

    printf("The String you entered -> %s\n",str);
    printf("The Array of ASCII val -> [");
    for(int j = 0 ; j < i ; j++){
        printf(" %d,",arr[j]);
    }
    printf("]\n");

    
    return 0;
}
