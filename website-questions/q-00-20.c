// Single-Dimensional Arrays -> Q 20 : **Trapping Rain Water Problem:** Given an array of non-negative integers representing an elevation map, where each bar has a width of 1, calculate how much water it can trap after raining.

#include <stdio.h>

int main(){

    int arr[10] = {10,3,5,32,3,3,4,53,42,9} ;
    int s = sizeof(arr)/sizeof(arr[0]);

    printf("\nArray      -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d,",arr[i]);
    }
    printf("]\n");


    int lft = 0;
    int ryt = s-1;
    int lmax,volume = 0;
    int first = 1;

    for (int i = 1 ; i < s-1 ; i++){
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            lmax = i;
            continue;
        }

        if (lft < lmax){
            if (first){
            lft = lmax;
            first = 0;
            continue;}

            for (int j = lft + 1 ; j < i ; j++){
                volume += (arr[lft] -  arr[j] ) * 1 * 1; // for voluume
            }
            lft = lmax;

        }
        else {
            for (int j = lft + 1 ; j < i ; j++){
                volume += (arr[lft] -  arr[j] ) * 1 * 1; // for voluume
            }
            lft = lmax;
        }
    }

    return 0;
}
