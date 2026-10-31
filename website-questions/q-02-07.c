// Recursion -> Q 07 : Enter a number from the user and add all its digits using recursion.

#include <stdio.h>

int dig_sum(int n){
    if (n == 0) {
        return 0;
    }

    return (n % 10) + dig_sum(n / 10);
}

int main(){

    int n;
    printf("Enter the number -> ");
    scanf("%d", &n);

    if (n < 0){ n = -n;}

    printf("Sum of digits -> %d\n", dig_sum(n));

    return 0;
}