#include<stdio.h>
//linker error will came linker address not given
void f1();
int main()
{
	printf("In main\n");
	printf("calling f1 function\n");
	f1();
	printf("terminating program\n");
}


