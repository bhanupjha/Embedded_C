#include<stdio.h>
int main()
{
//volatile is a type qualifier, informs the compiler that value of this variable will be changed or effected by the
//external resources , so dont perform code optimization on it, every time when we need to access fetch from memory.
volatile int i=0; 
printf("%d %d %d %d %d",++i,++i,++i,++i,++i); //1 2 3 4 5
}
