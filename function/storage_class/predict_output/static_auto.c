#include<stdio.h>
void fun()
{
static int s = 1;
int a = 1;
s++;
a++;
printf("%d %d\n", s, a);
}
int main()
{
fun();
fun();
fun();
}
