// Single-Dimensional Arrays -> Q 03 : Enter an array from the user and copy it into a second array.

#include <stdio.h>

int main(){

    int arr[10],arr2[10];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Copping array :\n");
    
    for (int i = 0; i< s ; i++ ){
        arr2[i]=arr[i];
    }
    
    printf("Coppied array elemnts :\n");
    for (int i = 0; i <s ; i++ ){
        printf("The element number %d is -> %d \n",i+1,arr2[i]);
    }



    return 0;
}

