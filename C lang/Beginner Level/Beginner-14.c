//Compute GCD and LCM of two numbers
#include <stdio.h>
int main() {
    int a, b, gcd, lcm, temp1, temp2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp1 = a; temp2 = b;
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    gcd = a;
    lcm = (temp1 * temp2) / gcd;
    printf("GCD = %d, LCM = %d\n", gcd, lcm);
    return 0;
}
