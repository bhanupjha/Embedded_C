#include<stdio.h>
int data=10; // strong symbol -> in one program cannot have 2 strong symbol
void f1();
int main()
{
	printf("In main %d\n", data);
	f1();
}

