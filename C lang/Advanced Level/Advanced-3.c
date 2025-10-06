#include <stdio.h>

int factorial(int n);
int fibonacci(int n);



int factorial(int n) {
    if (n == 0) 
	   return 1;
	   
       return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0) 
	   return 0;
    if (n == 1) 
	   return 1;
	   
       return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n = 5,i;
    printf("Factorial of %d = %d\n\n", n, factorial(n));

    printf("Fibonacci series (first 5 terms):\n");
    for (i = 0; i < 5; i++)
        printf("%d ", fibonacci(i));
    return 0;
}
