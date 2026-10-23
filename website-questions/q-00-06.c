// Single-Dimensional Arrays -> Q 06 : Enter an array from the user and print all positive numbers.

#include <stdio.h>

int main(){

    int arr[5];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){
        if (arr[i] > 0 )
        printf("The +ve element is -> %d \n",arr[i]);
    }



    return 0;
}

