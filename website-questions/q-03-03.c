// Multi-Dimensional Arrays -> Q 03 : Enter two matrices from the user, subtract them, and display the result.

#include <stdio.h>
#define MATSIZE 3

int main(){

    int matrix1[MATSIZE][MATSIZE] = {0};
    int matrix2[MATSIZE][MATSIZE] = {0};
    int mat_sub[MATSIZE][MATSIZE] = {0};

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 1, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 2, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            mat_sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("+-------+-Subtraction-+-------+\n");
    printf("+---------+---------+---------+\n");
    for (int i = 0; i < MATSIZE ; i++){
        printf("|         |         |         |\n|");
        for (int j = 0; j < MATSIZE ; j++){
            printf("   %3d   |",mat_sub[i][j]);
            
        }
        printf("\n|         |         |         |\n");
        printf("+---------+---------+---------+\n");
    }

    return 0;
}
