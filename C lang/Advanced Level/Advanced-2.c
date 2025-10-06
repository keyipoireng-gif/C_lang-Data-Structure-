#include <stdio.h>

void changeValue(int x);       // Call by value
void changeArray(int arr[]);   // Call by reference (array)

int main() {
    int num = 10;
    int arr[3] = {1, 2, 3};

    printf("Before changeValue: %d\n", num);
    changeValue(num);
    printf("After changeValue: %d\n", num);

    printf("Before changeArray: %d\n", arr[0]);
    changeArray(arr);
    printf("After changeArray: %d\n", arr[0]);

    return 0;
}

void changeValue(int x) {
    x = 50;  // does not affect main variable
}

void changeArray(int arr[]) {
    arr[0] = 100;  // affects original array
}
