// Recursion -> Q 01 : Calculate the factorial of a number using recursion.

#include <stdio.h>

int factorial(int n){
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}


int main() {

    int n;
    printf("Enter the number -> ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers \n");
        return 1;
    }

    printf("Factorial of %d -> %d\n", n, factorial(n));

    return 0;
}