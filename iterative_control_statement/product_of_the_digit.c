#include<stdio.h>

int main()
{
	int number, t, rem, multiply=1;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	t=number;
	for(t;t;t=t/10)
	{
		rem = t%10;
		multiply = multiply*rem;
	}
	printf("The Multiplication of the digit of %d is: %d\n", number, multiply);
}
