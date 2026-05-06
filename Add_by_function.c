#include<stdio.h>

// Add two number using function

int add(int, int);    // declearation
int main()
{
	int n1 = 10, n2 = 20;
	int c = add(n1, n2); // function call
	printf("%d\n", c);
}	

int add(int a, int b)
{
	return a + b; // function definition
}
