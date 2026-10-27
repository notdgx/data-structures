// Sorting Algorithms -> Q 19 : Enter a string array from the user and perform quick sort using iteration. Also calculate the best and worst time complexity with exact time.

#include <stdio.h>
#include <time.h>

#define SIZE 100

int partition(char arr[], int low, int high, long long *comparisons){
    char pivot = arr[high];
    int i = low - 1;
    char temp;

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

void quick_sort(char arr[], int n, long long *comparisons){

    int stack[SIZE];
    int top = -1;
    int low, high, pivot;

    stack[++top] = 0;
    stack[++top] = n - 1;

    while (top >= 0){
        high = stack[top--];
        low = stack[top--];

        pivot = partition(arr, low, high, comparisons);

        if (pivot - 1 > low){
            stack[++top] = low;
            stack[++top] = pivot - 1;
        }

        if (pivot + 1 < high){
            stack[++top] = pivot + 1;
            stack[++top] = high;
        }
    }
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
        printf("Enter element number %d -> ", i + 1);
        scanf(" %c", &arr[i]);
    }

    printf("\nArray -> [");
    for (int i = 0; i < n; i++){
        printf("%c, ", arr[i]);
    }
    printf("]\n");


    start = clock();
    quick_sort(arr, n, &comparisons);
    end = clock();

    elapsed = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nSorted array -> [");
    for (int i = 0; i < n; i++){
        printf("%c, ", arr[i]);
    }
    printf("]\n");

    printf("\nTotal comparisons -> %lld\n", comparisons);
    
    printf("Execution time -> %.9f seconds\n", elapsed);
    
    printf("Best-case time complexity -> O(n log n)\n");
    printf("Worst-case time complexity -> O(n^2)\n");

    return 0;
}