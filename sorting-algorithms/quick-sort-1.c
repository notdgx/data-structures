#include <stdio.h>

int returnpivot(int arr[], int l, int u) {
    int pivot = l;
    int temp;
    int flag = 0;

    while (1) {

        if (flag == 0) {
            int found = 0;

            for (int i = u; i > pivot; i--) {
                if (arr[i] < arr[pivot]) {
                    temp = arr[pivot];
                    arr[pivot] = arr[i];
                    arr[i] = temp;

                    pivot = i;
                    found = 1;
                    flag = 1;
                    break;
                }
            }
// 
            if (!found) {
                return pivot;
            }
        }

        else {
            int found = 0;

            for (int i = l; i < pivot; i++) {
                if (arr[i] > arr[pivot]) {
                    temp = arr[pivot];
                    arr[pivot] = arr[i];
                    arr[i] = temp;

                    pivot = i;
                    found = 1;
                    flag = 0;
                    break;
                }
            }

            if (!found) {
                return pivot;
            }
        }
    }
}

void quicksort(int arr[], int l, int u) {
    if (l >= u) {
        return;
    }

    int index = returnpivot(arr, l, u);

    quicksort(arr, l, index - 1);
    quicksort(arr, index + 1, u);
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }

    printf("\n");
}

int main() {
    int arr[] = {5, 3, 2, -8, 0, 3, 76, 2, -45, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printarray(arr, size);

    quicksort(arr, 0, size - 1);

    printarray(arr, size);

    return 0;
}
