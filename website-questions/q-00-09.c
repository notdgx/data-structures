// Single-Dimensional Arrays -> Q 09 : Enter an array from the user and find the k-th smallest value.


#include <stdio.h>

int main(){

    int arr[10] , k ;
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
        
    }

    for (int i = 0; i < s - 1; i++) {
        for (int j = i + 1; j < s; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("Enter the k th Position -> ");
    scanf("%d",&k);
    printf("The k th Position Element is -> %d ",arr[k-1]);




    return 0;
}

