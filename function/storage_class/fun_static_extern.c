#include<stdio.h>
static void f1()
{
	printf("In f1\n");
}

void f2()
{
	printf("In f2\n");
	f1();
}
