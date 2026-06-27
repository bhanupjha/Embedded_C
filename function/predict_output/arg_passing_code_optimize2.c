#include<stdio.h>
int foo(int,int,int);
int main()
{ 
int a=10,b=20;
int c=foo(a=++b,b,++b); // 22 22 22 - code optimize
printf("%d",c);
}
int foo(int x,int y,int z)
{
return x+y+z;
}
