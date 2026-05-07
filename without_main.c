#include<stdio.h>
#include<stdlib.h>

void f1();
void f2();
void f3();


void f1()
{
	printf("In f1\n");
	f2();
	printf("back to f1 return to main\n");
	exit(1);
}

void f2()
{
	printf("In f2\n");
	f3();
	printf("back to f2 return to main\n");
}

void f3()
{
	printf("In f3\n");
	printf("f3 completed return to f2\n");
}

