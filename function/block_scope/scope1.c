#include<stdio.h>
int main()
{
	int a=10; //outer block
	{
		int b=45;//Inner block
		printf("%d\n",b);
	}
	printf("%d\n", a);
}
