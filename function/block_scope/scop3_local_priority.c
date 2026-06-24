#include<stdio.h>
int main()
{
	int a=10; //outer block
	{
		int a=45;//Inner block
		printf("%d\n",a);// a-> 45 bcz pririty to local variable.
	}
	printf("%d\n", a); //This is valid bcz both declared in different scope
}
