#include<stdio.h>
void f1(int,int);

int main()
{
int x=10,y=20; //actual args
f1(x=y,y=45); //args passed in func from right to left and execution from right to left
printf("%d %d",x,y);
}

void f1(int a,int b) // a and b are formal args.
{
++a; //it doesn't effect to actual arg
++b; //it doesn't effect to actual arg
}
