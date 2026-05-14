#include<stdio.h>

int main()
{
	int x, y;
	printf("Enter the value of x and y: ");
	scanf("%d %d", &x, &y);
	int z = x>20 || y<35;
	printf("The value of z is: %d\n", z);
}
