// Sorting Algorithms -> Q 07 : Enter an integer array from the user and perform merge sort using iteration. Also calculate the best and worst time complexity with exact time.

#include <stdio.h>
#include <time.h>

#define SIZE 100

void merge_sort(int arr[], int n, long long *comparisons){
    int temp[SIZE];

    for (int width = 1; width < n; width *= 2){
        for (int left = 0; left < n - 1; left += 2 * width){
            int mid = left + width - 1;
            int right = left + 2 * width - 1;

            if (mid >= n - 1){continue;}

            if (right >= n){
                right = n - 1;}

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

            while (i <= mid){ temp[k++] = arr[i++]; }
            while (j <= right){ temp[k++] = arr[j++]; }

            for (int p = left; p <= right; p++){
                arr[p] = temp[p];
            }
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
        printf("Enter element number %d -> ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray -> [");
    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    

    start = clock();
    merge_sort(arr, n, &comparisons);
    end = clock();

    elapsed = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nSorted array -> [");
    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    printf("\nTotal comparisons -> %lld\n", comparisons);
    
    printf("Execution time -> %.6f seconds\n", elapsed);

    printf("Best-case time complexity -> O(n log n)\n");
    printf("Worst-case time complexity -> O(n log n)\n");
    

    return 0;
}