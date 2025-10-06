#include <stdio.h>

// Function prototypes
int sum(int a, int b);
int factorial(int n);
void swap(int *x, int *y);
int i;



int sum(int a, int b) {
    return a + b;
}

int factorial(int n) {
    int fact = 1;
    for ( i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 5, b = 3, f, x = 10, y = 20;

    printf("Sum = %d\n", sum(a, b));

    f = factorial(5);
    printf("Factorial of 5 = %d\n", f);

    printf("Before Swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swap: x = %d, y = %d\n", x, y);

    return 0;
}