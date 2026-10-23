// Single-Dimensional Arrays -> Q 12 : Enter an array from the user, remove duplicate values, and replace them with zeros.


#include <stdio.h>

int main(){

    int arr[10],map[10][11] = {0},found,x=0;
    int s = sizeof(arr)/sizeof(arr[0]);



    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray After -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d, ",arr[i]);
    }
    printf("]\n");

    for (int i = 0; i< s ; i++ ){

        found = 0;
        for (int k = 0; k < x; k++){
            if (arr[i] == map[k][0]){
                found = 1;
                break;
            }
        }
        
        if (found == 0){
            map[x][0] = arr[i];
            int first = 1;
            
            for (int j = 0; j< s ; j++ ){

                if (arr[i] == arr[j]){
                    if (first) {
                        map[x][j+1] = 2;
                        first = 0;
                        continue;
                    }
                    map[x][j+1] = 1;
                }
            }
            
            x++;

        }


    }

    for(int i = 0;i < x; i++){
        int sum = 0;
        for (int j = 0; j< s ; j++ ){
            sum = sum + map[i][j+1];
        }
        if (sum != 2){
            printf("\nDuplicated value found -> %d , removed duplicates at index positons -> ",map[i][0]);
            for (int k=0 ; k<s; k++){
                if (map[i][k+1] == 1){
                    arr[k] = 0;
                    printf("%d, ",k);
                }
            }
        }
    }

    printf("\n\nArray After -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d, ",arr[i]);
    }
    printf("]\n");



    return 0;
}

