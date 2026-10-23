// Single-Dimensional Arrays -> Q 14 : Enter an array from the user and print all possible combinations of its elements.

#include <stdio.h>

void permute(int arr[], int start, int n) {
    if (start == n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = start; i < n; i++) {
        // swap 
        int temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;

        permute(arr, start + 1, n);

        // undo it 
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[4];
    int n =  sizeof(arr)/sizeof(arr[0]);

    for (int i = 0 ; i < n ; i++) {
        printf("Enter element %d ->  ", i+1);
        scanf("%d", &arr[i]);
    }

    permute(arr, 0, n);

    return 0;
}