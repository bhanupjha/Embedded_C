#include<stdio.h>
int main()
{
        int x=10;
	//initializer for a static variable must be a constant expression, and x is an automatic variable 
	//whose value is determined at run time, not at compile time.
        static int a=x; 
        printf("%d",x);
        printf("%d",a);
}

