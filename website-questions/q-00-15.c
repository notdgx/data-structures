// Single-Dimensional Arrays -> Q 15 : Enter an array from the user and print all palindrome numbers.

#include <stdio.h>

int palindrome_check(int n){

    int a = n, rev = 0, d;

        while (n > 0) {
            d = n % 10;
            rev = rev* 10 + d;
            n = n/10;
        }

        return a == rev;
    }


int main(){

    int arr[5];
    int s = sizeof(arr)/sizeof(arr[0]);


    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray      -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d,",arr[i]);
    }
    printf("]\n");

    printf("\nPlaindrome -> [");
    for (int i = 0 ; i <s ; i ++){
        if (palindrome_check(arr[i]) == 1){
        printf("%d,",arr[i]);
        continue;
        }
        printf(" NO  ,");
    }
    printf("]\n");


    return 0;
}
