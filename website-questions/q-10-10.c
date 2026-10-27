// Sorting Algorithms -> Q 10 : Enter an integer array from the user and perform quick sort using recursion. Also calculate the best and worst time complexity with exact time.

#include <stdio.h>
#include <time.h>

#define SIZE 100

int partition(int arr[], int low, int high, long long *comparisons){
    int pivot = arr[high];
    int i = low - 1;
    int temp;

    for (int j = low; j < high; j++){
        (*comparisons)++;

        if (arr[j] <= pivot){
            i++;

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quick_sort(int arr[], int low, int high, long long *comparisons){
    if (low < high){
        int pivot = partition(arr, low, high, comparisons);

        quick_sort(arr, low, pivot - 1, comparisons);
        quick_sort(arr, pivot + 1, high, comparisons);
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
        printf("Enter element number %d -> ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray -> [");
    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    start = clock();
    quick_sort(arr, 0, n-1, &comparisons);
    end = clock();

    elapsed = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nSorted array -> [");
    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    printf("\nTotal comparisons -> %lld\n", comparisons);

    printf("Execution time -> %.9f seconds\n", elapsed);

    printf("Best-case time complexity -> O(n log n)\n");
    printf("Worst-case time complexity -> O(n^2)\n");

    return 0;
}