#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 300};
    int *p = arr,i;

    for ( i = 0; i < 3; i++) {
        printf("Address: %p, Value: %d\n", (p + i), *(p + i));
    }
    return 0;
}
