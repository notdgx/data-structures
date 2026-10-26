// Searching Algorithms -> Q 07 : Enter an integer array and an integer value from the user, then perform binary search using recursion.

#include <stdio.h>
#define SIZE 100

int binary_search(int arr[], int low, int high, int target){
    
    if (low > high){ return -1;}

    int mid = low + (high - low) / 2;

    if (arr[mid] == target){ return mid;}

    if (arr[mid] < target){  return binary_search(arr, mid + 1, high, target);}

    return binary_search(arr, low, mid - 1, target);
}


int main(){

    int arr[SIZE], n, target, index = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    if (n <= 0 || n > SIZE){
        printf("Invalid array size\n");
        return 1;
    }
    
    printf("Enter the SORTED array -> \n");
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

    index = binary_search(arr,0,n-1,target);

    if (index != -1){
        printf("Element found at index -> %d\n", index);}
    else{
        printf("Element not found\n");}

    return 0;
}