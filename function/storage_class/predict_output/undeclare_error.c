#include<stdio.h>
static int a=x; // x is undeclare first using it
int main()
{
        int x=10;
        printf("%d",x);
        printf("%d",a);
}
