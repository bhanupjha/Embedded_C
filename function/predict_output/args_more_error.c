#include<stdio.h>
int foo(int,int,int);
int main()
{ int a=10,b=20;
int c=foo(a=b,b,++b,b); // 21 21 21 21 - compile time error -> too many args to foo() fun
printf("%d",c);
}
int foo(int x,int y,int z)
{
return x+y+z;
}
