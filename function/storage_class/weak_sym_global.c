#include<stdio.h>
int data; // weak symbol 
void f1();
int main()
{
	printf("In main %d\n", data);
	f1();
}

