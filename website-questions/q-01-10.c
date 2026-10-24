// Strings -> Q 10 : Enter a string and an index number from the user, then print the character at that index.

#include <stdio.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i,index;

    printf("Enter the string  -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    printf("Enter the index number (0 to %d) ->",i-1);
    scanf("%d",&index);
    if (index <= i){
        printf("The Charachter at index %d is -> %c\n",index,str[index]);
    }
    else {
        printf("Invalid index");
    }
    return 0;
}
