// Sorting Algorithms -> Q 08 : Enter an integer array from the user and perform merge sort using recursion. Also calculate the best and worst time complexity with exact time.

#include <stdio.h>
#include <time.h>

#define SIZE 100

void merge(int arr[], int temp[], int left,int mid, int right,long long *comparisons){

    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right){
        (*comparisons)++;
        if (arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid){temp[k++] = arr[i++]; }

    while (j <= right){temp[k++] = arr[j++]; }

    for (int p = left; p <= right; p++){
        arr[p] = temp[p];
    }
}

void merge_sort(int arr[], int temp[], int left, int right,long long *comparisons){

    if (left >= right){ return;}

    int mid = left + (right - left) / 2;

    merge_sort(arr, temp, left, mid, comparisons);
    merge_sort(arr, temp, mid + 1, right, comparisons);

    merge(arr, temp, left, mid, right, comparisons);
}

int main(){

    int arr[SIZE], temp[SIZE], n;
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
    merge_sort(arr, temp, 0, n - 1, &comparisons);
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
    printf("Worst-case time complexity -> O(n log n)\n");

    return 0;
}