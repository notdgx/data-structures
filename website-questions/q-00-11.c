// Single-Dimensional Arrays -> Q 11 : Enter an array from the user and find the duplicate values.

#include <stdio.h>

int main(){

    int arr[10],map[10][11] = {0},found,x=0;
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

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
            
            for (int j = 0; j< s ; j++ ){
                if (arr[i] == arr[j]){
                    map[x][j+1] = 1;
                }
            }
            
            x++;

        }


    }

    for(int i = 0;i < x; i++){
    printf("\nValue %d found at index positoins - > ",map[i][0]);
        for (int j = 0; j< s ; j++ ){
            if (map[i][j+1] == 1)
            printf("%d,",j);
        }

    }



    return 0;
}

