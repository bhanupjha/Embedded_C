#include<stdio.h>

int main()
{
	int number, t, lowest=9, rem;
	printf("Enter the number: ");
	scanf("%d", &number);
	t=number;

	for(t;t;t=t/10)
	{
		rem = t%10;
		if(rem<lowest)
		{
			lowest=rem;
		}
	}
	printf("Lowest digit in %d is: %d\n", number, lowest);
		
}
