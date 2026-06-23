//Find the sum of digit of given integer
#include<stdio.h>
int high_digit(int);
int main()
{
	int num, result;
	printf("Enter the number: ");
	scanf("%d", &num);
	result=high_digit(num);
	printf("The highest digit in %d is: %d\n",num, result);
}

int high_digit(int n)
{
	int rem,highest=0;
	while(n)
	{
		rem=n%10;
		if(rem>highest)
		{
			highest=rem;
		}
		n=n/10;
	}
	return highest;
}
