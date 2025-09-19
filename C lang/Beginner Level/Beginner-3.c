//Take Three Number and print the Greatest
#include<stdio.h>

int main() {6
	
	int num1,num2,num3;
	
	printf ("Enter the First Number :");
	scanf ("%d", &num1);
	
	printf ("Enter the Second Number  :");
	scanf ("%d", &num2);
	
	printf ("Enter the Third Number :");
	scanf ("%d", &num3);
	
	if (num1>=num2 && num1>=num3) {
		printf("%d is the largest number", num1);
	}
	else if (num2>=num1 && num2>=num3) {
	printf("%d is the largest number", num2);	
	} else {
		printf ("%d is the largest number", num3);
	}
	
	return 0;
	
}
