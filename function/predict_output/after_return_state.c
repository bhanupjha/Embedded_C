#include<stdio.h>
int Add(int a,int b)
{
int c;
c=a+b;
return c; //this functin return c to calling function
printf("%d",c); //after return statement never executed
}

int main()
{
int n1=10,n2=20,n3;
n3=Add(n1,n2);
printf("program completed\n");
}
