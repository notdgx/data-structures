// Strings -> Q 07 : Enter two strings from the user and compare whether they are equal.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[100],ch;
    char str2[100];
    int s = sizeof(str)/sizeof(str[0]) , i,j;

    printf("Enter the string 1 -> ") ;
    for(i = 0 ; i < s-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    printf("Enter the string 2 -> ") ;
    for(j= 0 ; j < s-1;j++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str2[j] = ch;
    }
    str2[j] ='\0';


    printf("The String 1 you entered -> %s\n",str);
    printf("The String 2 you entered -> %s\n",str2);

    if (i != j){
        printf("Not Equal\n");
        return 0;
    }
    for(int k = 0 ; k<i ; i++){
        if (str[k] != str2[k]){
            printf("Not Equal\n");
            return 0;
        }
    }
    printf("Equal\n");
    
    return 1;
}
