// Single-Dimensional Arrays -> Q 20 : **Trapping Rain Water Problem:** Given an array of non-negative integers representing an elevation map, where each bar has a width of 1, calculate how much water it can trap after raining.

#include <stdio.h>

int main(){

    int arr[10] = {10,3,5,32,3,3,4,53,42,9} ;
    int s = sizeof(arr)/sizeof(arr[0]);
    int volume = 0 ;

    printf("\nArray      -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d,",arr[i]);
    }
    printf("]\n");



    /*
        FORMULA:

        water[i] = min(lmax, rmax) - arr[i]

        lmax = Maximum height from index 0 to i.
        rmax = Maximum height from index i to s-1.
        arr[i] = Height of the current bar.

        We use the smaller maximum because water spills
        over the shorter boundary.

        Total water = Sum of water[i] for all indices.
    */


    for (int i = 0; i < s; i++) {
        int lmax = arr[0];
        int rmax = arr[s - 1];

        // maximum on the left
        for (int j = 0; j <= i; j++) {
            if (arr[j] > lmax) {
                lmax = arr[j];
            }
        }

        // maximum  on the right
        for (int j = i; j < s; j++) {
            if (arr[j] > rmax) {
                rmax = arr[j];
            }
        }

        // Water level = minimum of left and right 
        int water_level = (lmax < rmax) ? lmax : rmax;

        // Water trapped above the current bar
        int water = water_level - arr[i];
        volume += water;

        printf("Index %d | Height: %d | Lmax: %d | Rmax: %d | Water: %d\n",i, arr[i], lmax, rmax, water);
    }

    printf("\nTotal trapped water -> %d \n", volume);

    return 0;
}
