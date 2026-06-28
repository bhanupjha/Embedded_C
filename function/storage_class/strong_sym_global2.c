#include<stdio.h>
int data=10; // strong symbol 
void f1();
int main()
{
	printf("In main %d\n", data);
	f1();
}

