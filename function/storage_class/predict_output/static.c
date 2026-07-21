#include<stdio.h>
void fun()
{
static int x = 10;
x++;
printf("%d ", x);
}
int main()
{
fun();
fun();
fun();
}
