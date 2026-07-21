#include<stdio.h>
void f1(int x)
{
printf("x=%d\n",x);
}
int main()
{
int a=10;
f1(a+10);
printf("a=%d\n",a);
a=10;
f1(a++);
printf("a=%d\n",a);
a=10;
f1(++a);
printf("a=%d\n",a);
}
