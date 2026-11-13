// WAP to check no. is +ve or -ve using bitwise operation

#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number: \n");
	scanf("%d", &num);
	printf("Number: %d\n", num);
	(num & (1<<31))?printf("Number is negative\n"):printf("Number is positive\n");
}
