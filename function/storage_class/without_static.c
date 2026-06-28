#include<stdio.h>
//we used cnt here to count no of times f1 is called, but cnt always prints 1 only ,because as it is local variable for
//every function new cnt is created and initialised with zero
// so declare as static
void f1();
void f2();
int main()
{
 printf("in main\n");
 f1();
 printf("back to main\n");
 f1();
 printf("back to main\n");
 f2();
}
void f1()
{
 int cnt=0;
 printf("f1 is called %d times\n",++cnt);
}
void f2()
{
 f1();
}
