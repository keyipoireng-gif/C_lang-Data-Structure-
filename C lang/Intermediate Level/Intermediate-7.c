//Add,subtract,multiply two integers using switch-case

#include <stdio.h>

int main(void) {
    int a, b, choice, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Sum = %d\n", result);
            break;
        case 2:
            result = a - b;
            printf("Difference = %d\n", result);
            break;
        case 3:
            result = a * b;
            printf("Product = %d\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

