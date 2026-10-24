// Strings -> Q 21 : Print all permutations of a string, e.g., "ABCDE".


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


void permute(char arr[], int start, int n) {
    if (start == n) {
        for (int i = 0; i < n; i++) {
            printf("%c ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = start; i < n; i++) {
        // swap 
        char temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;

        permute(arr, start + 1, n);

        // undo it 
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
    }
}



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


    printf("The string you entered -> %s\n",str);
    permute(str,0,i);

    return 0;
}
