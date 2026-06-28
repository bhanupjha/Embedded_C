#include<stdio.h>
int main()
{
        int x=10;
	//static var must be intialised with constant
        static int a=10+5; // it is valid its evaluated at compile time 
        printf("%d\n",x);
        printf("%d\n",a);
}
