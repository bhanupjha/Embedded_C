#include<stdio.h>
void f1();
int main()
{
        int data=10;
        printf("%d\n",data); //10
        f1();
}
int x=5;
void f1()
{
        printf("%d",x); //5
}
