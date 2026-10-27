// Sorting Algorithms -> Q 16 : Enter a string array from the user and perform insertion sort using recursion. Also calculate the best and worst time complexity with exact time.

#include <stdio.h>
#include <time.h>

#define SIZE 100

void insertion_sort(char arr[], int n, long long *comparisons){

    if (n <= 1){ return;}

    insertion_sort(arr, n - 1, comparisons);

    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0){
        (*comparisons)++;
        if (arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        else{break;}
    }

    arr[j + 1] = key;
}


int main(){

    char arr[SIZE];
    int n;

    long long comparisons = 0;
    clock_t start, end;
    double elapsed;

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
    for (int i = 0; i < n; i++){
        printf("%c, ", arr[i]);
    }
    printf("]\n");



    start = clock();
    insertion_sort(arr, n, &comparisons);
    end = clock();

    elapsed = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nSorted array -> [");
    for (int i = 0; i < n; i++){
        printf("%c, ", arr[i]);
    }
    printf("]\n");

    printf("\nTotal comparisons -> %lld\n", comparisons);
    
    printf("Best-case comparisons -> %d\n", n - 1);
    printf("Worst-case comparisons -> %lld\n",(long long)n * (n - 1) / 2);

    printf("Execution time -> %.9f seconds\n", elapsed);

    printf("\nBest-case time complexity -> O(n)\n");
    printf("Worst-case time complexity -> O(n^2)\n");

    return 0;
}