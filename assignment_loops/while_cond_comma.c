#include<stdio.h>
//it goes to infinity loop bcz in every iteration i is resetting to 0
int main()
{
int i = 0;
while(i < 3, i = 0, i < 5)
{
printf("%d ",i++);
}
}
