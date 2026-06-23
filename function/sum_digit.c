//Find the sum of digit of given integer
#include<stdio.h>
int sum(int);
int main()
{
	int num, result;
	printf("Enter the number: ");
	scanf("%d", &num);
	result=sum(num);
	printf("The sum of digit of %d is: %d\n",num, result);
}

int sum(int n)
{
	int rem,sum=0;
	while(n)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	return sum;
}
