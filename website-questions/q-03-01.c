// Multi-Dimensional Arrays -> Q 01 : Enter a matrix of 4 rows and 2 columns from the user and display it in matrix format.

#include <stdio.h>

int main(){

    int matrix[4][2] = {0};

    for (int i = 0; i < 4 ; i++){
        for (int j = 0; j < 2 ; j++){
            printf("Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("+--------+--------+\n");
    for (int i = 0; i < 4 ; i++){
        printf("|                  |\n|");
        for (int j = 0; j < 2 ; j++){
            printf("  %3d   |",matrix[i][j]);
        }
        printf("\n|                  |\n");
        printf("+--------+--------+\n");
            
    }
    

    return 0;
}
