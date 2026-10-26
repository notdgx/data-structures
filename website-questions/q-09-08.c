// Searching Algorithms -> Q 08 : Enter a string and a character from the user, then perform binary search using iteration.

#include <stdio.h>
#define SIZE 100

int binary_search(char arr[], int n, char target)
{
    int low = 0, high = n - 1, mid;

    while (low <= high){
        mid = low + (high - low) / 2;

        if (arr[mid] == target) {return mid;}

        else if (arr[mid] < target) {low = mid + 1;}

        else{  high = mid - 1;}
    }
    return -1;
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


    index = binary_search(arr,n,target);

    if (index != -1){
        printf("Element found at index -> %d\n", index);}
    else{
        printf("Element not found\n");}

    return 0;
}
