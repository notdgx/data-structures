// Recursion -> Q 02 : Calculate the Fibonacci number using recursion.
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {return 0;}
    if (n == 1) { return 1;}

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the positionm -> ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid position\n");
        return 1;
    }

    printf("Fibonacci number at position %d -> %d\n", n, fibonacci(n));

    return 0;
}