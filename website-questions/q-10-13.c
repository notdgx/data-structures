// Sorting Algorithms -> Q 13 : Enter a string array from the user and perform bubble sort using iteration. Also calculate the best and worst time complexity with exact time.

#include <stdio.h>
#include <time.h>

#define SIZE 100

void bubble_sort(char arr[], int n, long long *comparisons){

    int temp;

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            (*comparisons)++;

            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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
        printf("Enter element number %d -> ", i+1);
        scanf(" %c", &arr[i]);
    }

    printf("\nArray -> [");
    for (int i = 0; i < n; i++){
        printf("%c, ", arr[i]);
    }
    printf("]\n");



    start = clock();
    bubble_sort(arr,n,&comparisons);
    end = clock();

    elapsed = (double)(end - start) / CLOCKS_PER_SEC;


    printf("\nSorted array -> [");
    for (int i = 0; i < n; i++){
        printf("%c, ", arr[i]);
    }
    printf("]\n");


    printf("\nTotal comparisons -> %lld\n", comparisons);
    printf("Exact comparisons -> %lld\n",(long long)n * (n - 1) / 2);


    printf("Execution time -> %.9f seconds\n", elapsed);

    printf("\nBest-case time complexity -> O(n^2)\n");
    printf("Worst-case time complexity -> O(n^2)\n");

    return 0;
}