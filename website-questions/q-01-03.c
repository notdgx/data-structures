// Strings -> Q 03 : Enter a string from the user and convert it into sentence case.

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
        if (str[i] >= 97 && str[i] <= 122 ){
            if (flag == 0){
                str[i] = str[i] -32;
            flag = 1;}
        }
        else if(str[i] >= 65 && str[i] <= 90 ){
            if (flag == 0){
                flag = 1;
            }
            else{
            str[i] = str[i] + 32;}
        }
        else if (str[i] == ' ' && flag == 1){
            flag = 0;
        }
    }

    printf("The String you entered in Sentence case -> %s",str);
    
    return 0;
}
