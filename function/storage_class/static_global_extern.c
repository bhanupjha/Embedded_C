#include<stdio.h>
void f1();
void f2();
int x=7; //global variable
int main()
{
 
 printf("Intially x: %d \n",x);
 f1();
 f2();
 printf("Finally x value: %d\n", x);
}

void f2()
{
 printf("In f2 x value is: %d \n",x++); 
}
