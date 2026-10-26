// Searching Algorithms -> Q 01 : Enter an integer array and an integer value from the user, then perform linear search using iteration.

#include <stdio.h>
#define SIZE 100

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

    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            index = i;
            break;
        }
    }

    if (index != -1){
        printf("Element found at index -> %d\n", index);}
    else{
        printf("Element not found\n");}

    return 0;
}