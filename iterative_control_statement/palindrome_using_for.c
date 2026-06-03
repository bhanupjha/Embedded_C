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
	if(rev==number)
	{
		printf("%d number is palindrome\n", number);
	}
	else
	{
		printf("%d number is not a palindrome\n", number);
	}
		
}
