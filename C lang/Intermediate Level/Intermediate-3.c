//Sort an array using bubble sort

#include <stdio.h>
int main() {
    int n, arr[100],i,j,t;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array :\n");
    for ( i = 0; i < n; i++) scanf("%d", &arr[i]);

    for ( i = 0; i < n-1; i++)
        for ( j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                 t = arr[j]; 
				arr[j] = arr[j+1]; 
				arr[j+1] = t;
            }

    printf("Sorted array: ");
    for ( i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

