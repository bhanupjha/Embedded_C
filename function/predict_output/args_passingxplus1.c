#include<stdio.h>
void foo(int);
int main()
{
int x=10;
foo(x+1); // x+1 -> 11 passing args 11 but not changing/assigning the value of x
printf("%d",x); //10
}
void foo(int x)
{
printf("%d",x); //11
}
