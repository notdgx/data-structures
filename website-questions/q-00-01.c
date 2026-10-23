// Single-Dimensional Arrays -> Q 01 : Enter an array from the user and display all its values.

#include <stdio.h>

int main(){

    int arr[10];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){
        printf("The element number %d is -> %d \n",i+1,arr[i]);
    }



    return 0;
}

