//Search for element in array using linear search

#include <stdio.h>

int main(void) {
    int n, arr[100], x,i;
    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) 
	{
	   printf("Invalid n\n"); 
	   return 1;
	 }

    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; ++i) 
	       if (scanf("%d", &arr[i]) != 1) 
		   {
		    printf("Invalid input\n");
			 return 1; 
			 }

    printf("Enter element to search: ");
    if (scanf("%d", &x) != 1)
	  {
	     printf("Invalid input\n");
		   return 1;
		    }

    for ( i = 0; i < n; ++i) {
        if (arr[i] == x) 
		{
		 printf("Found at index %d )\n", i);
		  return 0; 
		  }
    }
    printf("Not found\n");
    return 0;
}

