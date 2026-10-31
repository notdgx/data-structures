// Recursion -> Q 04 : Convert a number into binary using recursion.
#include <stdio.h>

void binary(int n) {
    if (n == 0){ return;}
    
    binary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;

    printf("Enter a number -> ");
    scanf("%d", &n);

    if (n < 0) {
        printf("number should be +ve\n");
        return 1;
    }

    printf("Binary of %d -> ", n);

    if (n == 0){ printf("0");}
    else       { binary(n);}

    return 0;
}