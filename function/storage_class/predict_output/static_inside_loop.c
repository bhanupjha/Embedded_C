#include<stdio.h>
int main()
{
for(int i=0;i<3;i++)
{
static int x = 10;
x++;
printf("%d ", x);
}
}
