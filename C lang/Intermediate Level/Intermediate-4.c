//Reverse an array

#include <stdio.h>

int main(void) {
    int n, arr[100],i;

    printf("Enter number of elements (1-100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse in place
    for ( i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

