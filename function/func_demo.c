#include<stdio.h>
void f1();
void f2();
void f3();
int main()
{
	printf("In main\n");
	printf("calling f1 function\n");
	f1();
	printf("back to main from f1 function\n");
	printf("calling f2 function\n");
	f2();
	printf("back to main from f2 function\n");
	printf("calling f3 function\n");
	f3();
	printf("back to main from f3 function\n");
	printf("terminating program\n");
}

void f1()
{
	printf("In f1 function\n");
	printf("Hello\n");
	printf("f1 return control to main\n");
}

void f2()
{
        printf("In f2 function\n");
        printf("Hello Bhanu\n");
        printf("f2 return control to main\n");
}

void f3()
{
        printf("In f3 function\n");
        printf("Bye bro\n");
        printf("f3 return control to main\n");
}
