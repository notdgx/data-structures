// Multi-Dimensional Arrays -> Q 04 : Enter two matrices from the user, multiply them, and display the result.

#include <stdio.h>
#define MATSIZE 3

int main(){

    int matrix1[MATSIZE][MATSIZE] = {0};
    int matrix2[MATSIZE][MATSIZE] = {0};
    int mat_mul[MATSIZE][MATSIZE] = {0};

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
            int sum = 0;
            for (int k = 0; k < MATSIZE; k++) {
                        sum += matrix1[i][k] * matrix2[k][j];
                    }

                    mat_mul[i][j] = sum;

        }
    }

    printf("\n+--------+-Multiiply-+--------+\n");
    printf("+---------+---------+---------+\n");
    for (int i = 0; i < MATSIZE ; i++){
        printf("|         |         |         |\n|");
        for (int j = 0; j < MATSIZE ; j++){
            printf("   %3d   |",mat_mul[i][j]);
            
        }
        printf("\n|         |         |         |\n");
        printf("+---------+---------+---------+\n");
    }

    return 0;
}
