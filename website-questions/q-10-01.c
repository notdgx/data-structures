// Sorting Algorithms -> Q 01 : Enter an integer array from the user and perform selection sort using iteration. Also calculate the best and worst time complexity with exact time.

#include <stdio.h>
#include <time.h>

#define SIZE 100

void selection_sort(int arr[], int n, long long *comparisons){

    int min, temp;

    for (int i = 0; i < n - 1; i++){
        
        min = i;
        for (int j = i + 1; j < n; j++){
            (*comparisons)++;
            if (arr[j] < arr[min]){
                min = j;
            }
        }

        if (min != i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main(){

    int arr[SIZE], n;

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
        scanf("%d", &arr[i]);
    }

    printf("\nArray -> [");
    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("]\n");



    start = clock();
    selection_sort(arr, n, &comparisons);
    end = clock();

    elapsed = (double)(end - start) / CLOCKS_PER_SEC;


    printf("\nSorted array -> [");
    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("]\n");


    printf("\nTotal comparisons -> %lld\n", comparisons);
    printf("Exact comparisons -> %lld\n",(long long)n * (n - 1) / 2);


    printf("Execution time -> %.9f seconds\n", elapsed);

    printf("\nBest-case time complexity -> O(n^2)\n");
    printf("Worst-case time complexity -> O(n^2)\n");

    return 0;
}