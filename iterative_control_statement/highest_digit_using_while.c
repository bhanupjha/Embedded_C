#include<stdio.h>

int main()
{
	int number, t, rem, highest=0;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	t=number;
	while(t)
	{
		rem = t%10;
		if(highest<rem)
		{
			highest=rem;
		}
		t=t/10;

	}
	printf("The highest digit in %d is: %d\n", number, highest);
}
