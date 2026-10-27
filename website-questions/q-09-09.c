// Searching Algorithms -> Q 09 : Calculate the best-case and worst-case time complexity of linear search and measure its execution time on an integer array.

#include <stdio.h>
#define SIZE 100

int main(){

    int arr[SIZE], n, target, index = -1;

    int steps = 0;

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
        steps++;
        if (arr[i] == target){
            index = i;
            break;
        }
    }

    if (index != -1){
        printf("Element found at index -> %d\n", index);}
    else{
        printf("Element not found\n");}


    printf("Steps taken -> %d\n", steps);

    printf("\nTime Complexity ->\n");
    printf("Best case -> O(1) -> 1 step\n");
    printf("Worst case -> O(n) -> up to %d steps\n", n);

    return 0;
}