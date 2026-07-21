#include<stdio.h>
#include <stdio.h>
void fun()
{
static int x;
printf("%d ", x);
x++;
}
int main()
{
fun();
fun();
fun();
}
