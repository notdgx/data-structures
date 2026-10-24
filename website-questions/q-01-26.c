// Strings -> Q 26 : Enter a string from the user, split the first and second words, and return the starting index of the second word.


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char word1[STR_SIZE/4];
    char word2[STR_SIZE];
    int i,inword = 0,n=0;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    

    

    for (int j = 0 ; j < i ; j++){
        if ((str[j] >= 'a' && str[j] <='z') || ((str[j] >= 'A' && str[j] <='Z'))){
            inword = 1;
            word1[n] = str[j];
            n++;
        }
        else if ((inword = 1) && (str[j] == ' ')){
            int x = 0;
            while (j<i)
            {
                word2[x] = str[j];
                x++;
                j++;
            }

            break;
        }
    }

    printf("The String you entered -> %s\n",str);
    printf("The First Word         -> %s\n",word1);
    printf("The Second Word        -> %s\n",word2);
    
    return 0;
}
