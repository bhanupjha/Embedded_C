#include<stdio.h>
void foo(int);

int main()
{
	int a=20;
	foo(a);
	printf("%d", a); // 20
}

void foo(int x)
{
	x=100; // it doesn't effect the actual args.
}
