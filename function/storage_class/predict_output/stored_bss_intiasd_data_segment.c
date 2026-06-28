#include<stdio.h>
static int x; //untialised data segment -> 0
int y=-2;     //intialised data segment
int main()
{
       printf("%d %d",x,y); // 0 -2
}
