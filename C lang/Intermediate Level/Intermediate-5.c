//Count frequency of a specific element in array

#include <stdio.h>

int main(void) {
    int n, arr[100], x, count = 0,i;
    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) 
	{
	 printf("Invalid n\n");  
	 return 1; 
	 }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) 
	if (scanf("%d", &arr[i]) != 1) 
	 {
	  printf("Invalid input\n"); 
	  return 1; }

    printf("Enter element to count: ");
    if (scanf("%d", &x) != 1) 
	{ 
	  printf("Invalid input\n");
	  return 1; 
	  }

    for ( i = 0; i < n; ++i) 
	if (arr[i] == x) 
	    ++count;
    printf("Frequency of %d = %d\n", x, count);
    return 0;
}

