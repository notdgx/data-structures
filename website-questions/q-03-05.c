// Multi-Dimensional Arrays -> Q 05 : Enter a matrix from the user and copy it into another matrix of the same size.

#include <stdio.h>
#define MATSIZE 3

int main(){

    int matrix1[MATSIZE][MATSIZE] = {0};
    int copied[MATSIZE][MATSIZE] = {0};

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 1, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            copied[i][j] = matrix1[i][j];
        }
    }

    printf("\n+--------+-CopiedMat-+--------+\n");
    printf("+---------+---------+---------+\n");
    for (int i = 0; i < MATSIZE ; i++){
        printf("|         |         |         |\n|");
        for (int j = 0; j < MATSIZE ; j++){
            printf("   %3d   |",copied[i][j]);
            
        }
        printf("\n|         |         |         |\n");
        printf("+---------+---------+---------+\n");
    }

    return 0;
}
