// Recursion -> Q 08 : Find the arithmetic mean of an integer array using recursion.

#include <stdio.h>
#define SIZE 100

int arrsum(int arr[], int n){
    if (n == 0){ return 0;}

    return arr[n - 1] + arrsum(arr, n - 1);
}


int main() {
    int arr[SIZE], n;

    printf("Enter the size of the array -> ");
    scanf("%d", &n);

    for (int i = 0; i< n ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray You entered -> [");
    for (int i = 0 ; i <n ; i ++){
        printf("%d, ",arr[i]);
    }
    printf("]\n");

    printf("Arthemetic Mean -> %.4f\n", (float)arrsum(arr, n)/n);

    return 0;
}