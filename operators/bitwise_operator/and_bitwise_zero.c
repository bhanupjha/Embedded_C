#include<stdio.h>

int main()
{
	int x;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	int z = x&0; // any value of x o/p will be 0
	printf("The value of z is: %d\n", z);
}
