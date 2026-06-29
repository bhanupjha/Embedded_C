#include<stdio.h>
int swap(int, int);
int main()
{
	int n1=10, n2=20;
	printf("n1: %d n2: %d\n", n1, n2);
	swap(n1,n2);
	printf("n1: %d n2: %d\n", n1, n2);
}

int swap(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	// we can return only one value at a time
	return a;
	return b;
}
