// Strings -> Q 25 : Enter a string from the user and trim spaces from both ends, if any.


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char str2[STR_SIZE];
    int i,start= 0;
    int end;

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
    
    end = i - 1;
    
    while (str[start] == ' ' && start < i) {
        start++;
    }
    
    while (end >= start && str[end] == ' ') {
        end--;
    }
    
    int j = 0;
    for (int k = start; k <= end; k++) {
        str[j] = str[k];
        j++;
    }
    str[j] = '\0';
    
    printf("The String after Trimming -> %s\n",str);


    return 0;
}
