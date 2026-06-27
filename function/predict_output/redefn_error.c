#include<stdio.h>
void foo(int);
int main()
{
int x=10;
foo(++x);
printf("%d",x);
int x=5; // redefinition error -> we can't redeclare same variable name in same scope	
}
void foo(int x)
{
printf("%d",x);
}
