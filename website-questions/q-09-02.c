// Searching Algorithms -> Q 02 : Enter a string and a character from the user, then perform linear search using recursion.



#include <stdio.h>
#define SIZE 100

int linear_srch(char arr[],int n,int index,char data){
    if(index>=n){
        return -1;
    }
    
    if(arr[index] == data){
        return index;
    }
    return linear_srch(arr,n,index+1,data);
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


    index = linear_srch(arr,n,0,target);

    if (index != -1){
        printf("Element found at index -> %d\n", index);}
    else{
        printf("Element not found\n");}

    return 0;
}
