#include<stdio.h>

int main()
{
	int x;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	int z = x&1; // if x is even -> o/p = 0, if x is odd -> o/p = 1
	printf("The value of z is: %d\n", z);
}
