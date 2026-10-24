// Strings -> Q 08 : Enter two strings from the user, concatenate them into another string, and display the result.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char str2[STR_SIZE];
    char str_cat[STR_SIZE * 2];
    int i,j;

    printf("Enter the string 1 -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
        str_cat[i] = ch;
    }
    str[i] ='\0';

    printf("Enter the string 2 -> ") ;
    for(j= 0 ; j < STR_SIZE-1;j++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str2[j] = ch;
    }
    str2[j] ='\0';


    printf("The String 1 you entered -> %s\n",str);
    printf("The String 2 you entered -> %s\n",str2);
    
    strcat(str_cat,str2);
    printf("The String Concatinated -> %s\n",str_cat);


    return 0;
}
