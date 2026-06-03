#include<stdio.h>

int main()
{
	int number, t, rev=0;
	printf("Enter the number: ");
	scanf("%d", &number);
	t=number;
	
	for(t;t;t=t/10)
	{
		rev= rev*10+t%10;
	}
	printf("Reverse of %d number is : %d\n", number, rev);	
		
}
