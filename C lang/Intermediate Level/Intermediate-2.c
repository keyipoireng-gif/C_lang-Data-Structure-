//Find minimum and maximum elements in an array

#include <stdio.h>

int main(void) {
    int n;
    int arr[100];
    int min, max,i;

    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input. Please enter an integer between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Expected an integer.\n");
            return 1;
        }
    }

    /* initialize min and max to first element */
    min = max = arr[0];

    for ( i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}

