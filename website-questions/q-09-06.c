// Searching Algorithms -> Q 06 : Enter a string and a character from the user, then perform binary search using recursion.

#include <stdio.h>
#define SIZE 100

int binary_search(char arr[], int low, int high, int target){
    
    if (low > high){ return -1;}

    int mid = low + (high - low) / 2;

    if (arr[mid] == target){ return mid;}

    if (arr[mid] < target){  return binary_search(arr, mid + 1, high, target);}

    return binary_search(arr, low, mid - 1, target);
}


int main(){

    char arr[SIZE],target;
    int n, index = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    if (n <= 0 || n > SIZE){
        printf("Invalid array size\n");
        return 1;
    }
    
    
    printf("Enter the SORTED char array\n");
    for (int i = 0; i < n; i++){
        printf("Enter element number %d -> ", i+1);
        scanf(" %c", &arr[i]);
    }


    printf("\nArray -> [");
    for (int i = 0 ; i <n ; i ++){
        printf("%c, ",arr[i]);
    }
    printf("]\n");

    printf("Enter the value to search -> ");
    scanf(" %c", &target);


    index = binary_search(arr,0,n-1,target);

    if (index != -1){
        printf("Element found at index -> %d\n", index);}
    else{
        printf("Element not found\n");}

    return 0;
}
