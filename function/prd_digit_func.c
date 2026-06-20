//Find the product of digit of given integer
#include<stdio.h>
int product(int);
int main()
{
	int num, result;
	printf("Enter the number: ");
	scanf("%d", &num);
	result=product(num);
	printf("The product of digit of %d is: %d\n",num, result);
}

int product(int n)
{
	int rem,prod=1;
	while(n)
	{
		rem=n%10;
		prod*=rem;
		n=n/10;
	}
	return prod;
}
