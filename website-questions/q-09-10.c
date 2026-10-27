// Searching Algorithms -> Q 10 : Calculate the best-case and worst-case time complexity of binary search and measure its execution time on an integer array.

#include <stdio.h>
#define SIZE 100

int binary_search(int arr[], int n, int target, int * steps)
{
    int low = 0, high = n - 1, mid;

    while (low <= high){
        mid = low + (high - low) / 2;
        (*steps)++;

        if (arr[mid] == target) {return mid;}

        else if (arr[mid] < target) {low = mid + 1;}

        else{  high = mid - 1;}
    }
    return -1;
}

int main(){

    int arr[SIZE], n, target, index = -1;
    int steps = 0;

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

    index = binary_search(arr,n,target,&steps);

    if (index != -1){
        printf("Element found at index -> %d\n", index);}
    else{
        printf("Element not found\n");}

    
    printf("Steps taken in Binary Search -> %d\n", steps);

    printf("\nTime Complexity ->\n");
    printf("Best case -> O(1)\n");
    printf("Worst case -> O(log(n))\n");


    return 0;
}