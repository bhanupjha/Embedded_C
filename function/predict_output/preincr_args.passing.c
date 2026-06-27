#include<stdio.h>
void foo(int);
int main()
{
int x=10;
foo(++x); //pre increment -> so 11 is passed to function
printf("%d",x);
}
void foo(int x)
{
printf("%d",x);
}
