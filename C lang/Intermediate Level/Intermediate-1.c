//Take an integers in an array, print sum and average

#include <stdio.h>

int main() {
    int n, arr[100], sum = 0,i;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid input. Enter between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

