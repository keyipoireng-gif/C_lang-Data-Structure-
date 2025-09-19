//Find sum and average of n numbers; use loop

#include <stdio.h>
int main() {
    int n, i, num, sum = 0;
    float avg;
    printf("Enter count of numbers: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    avg = (float)sum / n;
    printf("Sum = %d, Average = %.2f\n", sum, avg);
    return 0;
}

