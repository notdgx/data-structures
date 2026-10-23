// Single-Dimensional Arrays -> Q 10 : Enter an array from the user and find the sum of all its values.

#include <stdio.h>

int main(){

    int arr[5],sum;
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){
        sum = sum + arr[i];
    }
    printf("The Sum is -> %d \n",sum);

    return 0;
}

