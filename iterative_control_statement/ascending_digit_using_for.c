#include<stdio.h>

int main()
{
	int number, rem, t, ascending;
	printf("Enter the number: ");
	scanf("%d", &number);
	t=number;
	ascending= t%10;

	for(t;t;t=t/10)
	{
		rem= t%10;
		if(rem>ascending)
		{
			break;
		}
		ascending=rem;
	}
	if(t==0)
	{
		printf("%d number is in ascending order\n", number);
	}
	else
	{
		printf("%d number not in ascending order\n", number);
	}
}
