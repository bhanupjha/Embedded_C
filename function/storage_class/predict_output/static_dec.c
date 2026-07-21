#include<stdio.h>
void fun()
{
static int x = 1;
printf("%d ", x);
if(x < 3)
{
x++;
fun();
}
}
int main()
{
fun();
}
