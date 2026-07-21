#include<stdio.h>
void f2(int x, int y)
{
printf("x=%d y=%d\n",x,y);
}
int main()
{
int a=10,b=20;
f2(++a,a=b);
printf("a=%d b=%d\n",a,b);
}

