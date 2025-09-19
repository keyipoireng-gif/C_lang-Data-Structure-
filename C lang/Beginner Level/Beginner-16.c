//Check if an input is prime
#include <stdio.h>
int main() {
    int n, flag = 1,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) flag = 0;
    else {
        for ( i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    if (flag) printf("Prime\n");
    else printf("Not Prime\n");
    return 0;
}
