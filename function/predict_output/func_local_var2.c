#include<stdio.h>
void f1(int x)
 {
 x+=10;
 }
int  main()
{
int x=20;
f1(x);
printf("x=%d\n",x);
}

