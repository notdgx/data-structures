// Multi-Dimensional Arrays -> Q 06 : Enter a matrix from the user, multiply it by a scalar value, and display the result.

#include <stdio.h>
#define MATSIZE 3

int main(){

    int matrix1[MATSIZE][MATSIZE] = {0};
    int scalar;


    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix , Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("Enter The scalar -> ");
    scanf("%d",&scalar);

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            matrix1[i][j] = matrix1[i][j] * scalar;
        }
    }

    printf("\n+--------+-ScalarMUL-+--------+\n");
    printf("+---------+---------+---------+\n");
    for (int i = 0; i < MATSIZE ; i++){
        printf("|         |         |         |\n|");
        for (int j = 0; j < MATSIZE ; j++){
            printf("   %3d   |",matrix1[i][j]);
            
        }
        printf("\n|         |         |         |\n");
        printf("+---------+---------+---------+\n");
    }

    return 0;
}
