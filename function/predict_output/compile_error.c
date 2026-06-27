#include<stdio.h>
void foo()
{
printf("%d",x); // compile time error -> undeclared x
}
int main()
{ int x=10;
printf("%d",x);
foo();
}
