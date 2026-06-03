#include<stdio.h>

int main()
{
	int number, t, lowest=9, rem, sl;
	printf("Enter the number: ");
	scanf("%d", &number);
	t=number;

	for(t;t;t=t/10)
	{
		rem = t%10;
		if(rem<lowest)
		{
			sl=lowest;
			lowest=rem;
		}
		else if(rem<sl && rem!=lowest)
		{
			sl=rem;
		}
	}
	printf("second Lowest digit in %d is: %d\n", number, sl);
		
}
