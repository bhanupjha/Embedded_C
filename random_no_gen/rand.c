// here rand function call but the generated value is always same

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	// calling rand function
	x=rand();
	printf("%d", x);
}
