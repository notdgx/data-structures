// Recursion -> Q 05 : Find the largest element in an integer array using recursion.

#include <stdio.h>
#define SIZE 100

int largest(int arr[], int n){

    if (n == 1){ return arr[0];}

    int max = largest(arr, n - 1);

    if (arr[n - 1] > max) {
        return arr[n - 1];
    }

    return max;
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

    printf("Largest element -> %d\n", largest(arr, n));

    return 0;
}