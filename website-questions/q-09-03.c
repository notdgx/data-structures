// Searching Algorithms -> Q 03 : Enter an integer array and an integer value from the user, then perform linear search using recursion.


#include <stdio.h>
#define SIZE 100

int linear_srch(int arr[],int n,int index,int data){
    if(index>=n){
        return -1;
    }
    
    if(arr[index] == data){
        return index;
    }
    return linear_srch(arr,n,index+1,data);
}

int main(){

    int arr[SIZE], n, target, index = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > SIZE){
        printf("Invalid array size\n");
        return 1;
    }

    for (int i = 0; i < n; i++){
        printf("Enter element number %d -> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray -> [");
    for (int i = 0 ; i <n ; i ++){
        printf("%d, ",arr[i]);
    }
    printf("]\n");

    printf("Enter the value to search -> ");
    scanf("%d", &target);


    index = linear_srch(arr,n,0,target);

    if (index != -1){
        printf("Element found at index -> %d\n", index);}
    else{
        printf("Element not found\n");}

    return 0;
}