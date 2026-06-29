#include<stdio.h>
long long factorial(int );
int main()
{
	int num=5;
	printf("The factorial of number is: %lld\n",factorial(num));
}

long long factorial(int n)
{
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}
