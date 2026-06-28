#include<stdio.h>
extern int x; //its inform the compiler somewhere in program int x is declared
int main()
{
        int data=10;
        printf("%d\n",data); //10
       printf("%d\n",x); //5
}
int x=5;

