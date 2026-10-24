// Strings -> Q 27 : Display a string using the alignment option selected by the user (1 for left, 2 for center, 3 for right).


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100
#define WIDTH 100


int main(){

    char str[STR_SIZE],ch;
    int i,option;
    int terminal_width = 100;

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
    printf("The Options ->\n1 -> Left\n2 -> Center\n3 -> Right\n");
    scanf("%d",&option);
    if (option == 1) {
        printf("%-*s\n", WIDTH, str);
    }
    else if (option == 2) {
        int spaces = (WIDTH - i) / 2;

        for (i = 0; i < spaces; i++) {
            printf(" ");
        }

        printf("%s\n", str);
    }
    else if (option == 3) {
        printf("%*s\n", WIDTH, str);
    }

    



    return 0;
}
