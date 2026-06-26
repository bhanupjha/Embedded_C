#include<stdio.h>
void fib(int);
int main()
{
	int series;
	printf("Enter the series: ");
	scanf("%d", &series);
	fib(series);
}

void fib(int n)
{
	int a=1, b=0, c=0;
	do
	{
		printf("%d ", c);
		c=a+b;
		a=b;
		b=c;
	}while(c<=n);
}
