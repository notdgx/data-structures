#include <stdio.h>

void mergearr(int arr[], int u, int l)
{
    int mid = (u + l + 1) / 2;
    int newarr[u - l + 1];
    int k = 0;
    int j = mid;

    for (int i = l; i < mid; i++){
        while (j <= u){
            if (arr[i] > arr[j]){
                newarr[k] = arr[j];
                k++;
                j++;
            }
            else{
                newarr[k] = arr[i];
                k++;
                break;
            }
        }

        if (j > u){
            i++;
            while (i < mid){
                newarr[k] = arr[i];
                k++;
                i++;
            }
            break;
        }
    }

    while (j <= u){
        newarr[k] = arr[j];
        k++;
        j++;
    }

    for (int i = 0; i < u - l + 1; i++){
        arr[l + i] = newarr[i];
    }
}


void mergesort(int arr[], int l, int u){
    if (l >= u){
        return;
    }

    int mid = (l + u) / 2;

    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, u);

    mergearr(arr, u, l);
}


int main(){

    int arr[] = {0, 8, 9, 10, 9999,0, 1, 2, 2, 3, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before \n");
    for (int i = 0; i < n; i++){
        printf("%d   ", arr[i]);
    }

    printf("\n\n");

    mergesort(arr, 0, n - 1);

    printf("After \n");
    for (int i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }

    return 0;
}
