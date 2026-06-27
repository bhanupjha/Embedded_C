#include<stdio.h>
int foo(int);

int main()
{
	int a=20;
	a=foo(a); //receiving the value 100 assign to a
	printf("%d", a); // 100
}

int foo(int x)
{
	x=100; 
	return x; // returning the value of x =100
}
