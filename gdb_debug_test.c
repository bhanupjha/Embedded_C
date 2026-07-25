// testing some gdb coomand to debug
#include<stdio.h>
int sumofdigit(int);
int main()
{
	int num, sum;
	printf("Enter the number: ");
	scanf("%d", &num);
	sum=sumofdigit(num);
	printf("sum of digit is: %d", sum);
}

int sumofdigit(int n)
{
	int sum=0, rem;
	while(n)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}
