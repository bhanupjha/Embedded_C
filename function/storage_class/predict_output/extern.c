#include<stdio.h>
 extern int x;
void f1()
{ 
	printf("%d\n", x++);
}
int main()
{
printf("%d\n",x);
f1();
printf("%d\n",x);
}
int x=100;
