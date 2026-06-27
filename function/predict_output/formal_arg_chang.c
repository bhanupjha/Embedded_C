#include<stdio.h>
void f1(int);
int main()
{ int x=10;
f1(x);
printf("%d",x);
}

void f1(int x)
{
++x; // x=11 -> but this value doesnot effect the actual args.
}
