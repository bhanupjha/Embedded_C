#include<stdio.h>
int data; // weak symbol 
//__attribute__((Weak))int data;  //sometimes compiler treated int data; as an strong symbol so explicity we have to write attribute for this
void f1()
{
	printf("In f1 %d\n", data);
}

