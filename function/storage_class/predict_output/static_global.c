#include<stdio.h>
int x = 5;
void fun()
{
static int x = 10;
x++;
printf("%d ", x);
}
int main()
{
fun();
printf("%d ", x);
fun();
}
