#include<stdio.h>
void f1()
{
        printf("%d",x); //x undeclared -> before declare its use in function
}
int main()
{
        int data=10;
        printf("%d\n",data);
        f1();
}
int x=5;

