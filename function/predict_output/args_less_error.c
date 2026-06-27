#include<stdio.h>
int foo(int,int,int);
int main()
{ int a=10,b=20;
int c=foo(a=b,b); //20 20 -> compile time error -> few args too foo() - expected 3 but passed 2 only.
printf("%d",c);
}
int foo(int x,int y,int z)
{
return x+y+z;
}
