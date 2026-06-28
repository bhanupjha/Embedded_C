#include<stdio.h>
//initialised global and static variables will be stored in initialised data segment
static int x=10;
int y=-2;
int main()
{
       printf("%d %d",x,y); //10 -2
}
