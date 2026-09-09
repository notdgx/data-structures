#include <stdio.h>

//  [ 4] [ 9] [16] [ 0] [ 3] [ 3] [ 7]  -> arr 
//  0     1    2    3    4    5    6 

//  [ 4] [ 9] [16] [ 0] [ 3] [ 3] [ 7]  -> newarr 
//  0     1    2    3    4    5    6 

 

// l  
// u
// mid 
// k 

void fn_merge(int arr[], int l, int u){

    int mid = (l+u+1)/2;
    int newarr[u+1-l];
    int k = 0;
    int i = l;
    int j = mid;

    while (i < mid && j <= u){
        if (arr[i] <= arr[j]) newarr[k++] = arr[i++];
        else                  newarr[k++] = arr[j++];
    }
    while (i < mid) newarr[k++] = arr[i++];   // remaining left half
    while (j <= u)  newarr[k++] = arr[j++];   // remaining right half

    for (i = 0; i < k; i++)
        arr[l + i] = newarr[i];               

    for (i = l; i <= u; i++)
        printf("%d   ", arr[i]);
}

void merge_sort(int arr[], int l, int u){
    if (l >= u){
        return;
    }

    int mid = (l + u + 1) / 2;

    merge_sort(arr, l, mid - 1);
    merge_sort(arr, mid, u);

    fn_merge(arr, l, u);
}

int main(){
    int arr[] = {4,9,16,0,3,3,7};

    merge_sort(arr, 0, 6);

    printf("sorted array : \n");
    for(int i = 0; i < 7; i++) {
        printf("%d  ", arr[i]);
    }


    return 0;
}