#include<stdio.h>

int main()
{
	int number, t, rem, sum=0;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	t=number;
	for(t;t;t=t/10)
	{
		rem = t%10;
		sum = sum+rem;
	}
	printf("The sum of the digit of %d is: %d\n", number, sum);
}
