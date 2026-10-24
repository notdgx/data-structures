// Strings -> Q 14 : Enter a string from the user and print the difference between the ASCII values of consecutive characters.

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
    

    printf("The String you entered -> %s\n",str);
    
    printf("\nThe Diff of ASCII in Adjacent values -> \n");
    for(int j =1 ; j < i ; j++){
        printf("%c (%d) - %c (%d) = %d\n",str[j],j,str[j-1],j-1,str[j]-str[j-1]);
    }


    return 0;
}
