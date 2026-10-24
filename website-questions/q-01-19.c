// Strings -> Q 19 : Enter a string from the user and convert it into a float.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;
    float value = 0;
    float dec = 0;
    float place = 0.1f;
    int flag = 0;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        if (!((ch>='0' && ch<='9') || ch == '.')){
            printf("Non Float char\n");
            return 0;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for (int j = 0 ; j < i ; j++){
        if (str[j] == '.') { flag = 1; continue;}
        if (flag == 0){
        value = value* 10 + (str[j] - '0');
        }

        else {
            dec = dec  + (str[j] - '0') * place;
            place /= 10;
        }
    }

    value += dec;
    
    printf("The String you entered -> %s\n",str);
    printf("The Float value become -> %f\n",value);

    return 0;
}
