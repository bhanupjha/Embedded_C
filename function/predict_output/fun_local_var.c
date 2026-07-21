#include<stdio.h>
void f1(void)
{
int x=10;
x+=10;
}
int main()
{
int x=5;
printf("x=%d\n",x);
f1();
printf("x=%d\n",x);
}
