#include<stdio.h>

int main()
{
	int x;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	int z = !x;
	printf("The value of z is: %d\n", z);
}
