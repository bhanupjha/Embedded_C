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
	while(c<=n)
	{
		printf("%d ", c);
		c=a+b;
		a=b;
		b=c;
	}
}
