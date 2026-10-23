// Single-Dimensional Arrays -> Q 18 : Find the local minima in an array.

#include <stdio.h>
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

    for (int i = 1 ; i <s-1 ; i++){
        if (arr[i] < arr[i-1] && arr[i] < arr[i+1]){
            printf("%d is local minima",arr[i]);
        }
    }

    return 0;
}
