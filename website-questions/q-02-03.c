// Recursion -> Q 03 : Calculate the sum of natural numbers up to 10 using recursion.
#include <stdio.h>

int sum(int n) {
    if (n == 0){ return 0;}
    return n + sum(n - 1);
}

int main() {

    printf("Sum of natural numbers up to 10 -> %d\n", sum(10));
    return 0;
}