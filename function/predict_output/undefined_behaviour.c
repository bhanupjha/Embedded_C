#include<stdio.h>
int foo(int);

// Undefined behavior: foo() is declared to return int but reaches the end
// without a return statement. The value assigned to 'a' is not defined or predictable

int main()
{
	int a=20;
	a=foo(a); 
	printf("%d", a); // undefined behaviour -> different output after every compilation
}

int foo(int x)
{
	x=100;  
}
