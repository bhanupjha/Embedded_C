#include<stdio.h>
extern int x;
void f1()
{
	printf("In f1 x value is: %d\n", ++x);
}
