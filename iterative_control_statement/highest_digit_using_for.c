#include<stdio.h>

int main()
{
	int number, t, rem, highest=0;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	t=number;
	for(t;t;t=t/10)
	{
		rem = t%10;
		if(rem>highest)
		{
			highest=rem;
		}
	}
	printf("The highest digit in %d is: %d\n", number, highest);
}
