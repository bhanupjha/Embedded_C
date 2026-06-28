#include<stdio.h>
void f1();
int main()
{
	printf("In main\n");
	f1(); // undefined  refrence to f1() -> f1 function declared as static
}
