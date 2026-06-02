#include<stdio.h>

int main()
{
	int number, t, rem, highest=0, sh=0;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	t=number;
	while(t)
	{
		rem = t%10;
		if(rem>highest)
		{
			sh=highest;
			highest=rem;
		}
		else if(rem>sh && rem!=highest)
		{
			sh=rem;
		}
		t= t/10;

	}
	printf("The second highest digit in %d is: %d\n", number, sh);
}
