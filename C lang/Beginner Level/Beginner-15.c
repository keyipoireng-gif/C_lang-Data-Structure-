//Print Fibonacci series up to n terms

#include <stdio.h>
int main() {
    int n, a = 0, b = 1,i, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

