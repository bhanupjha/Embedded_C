#include<stdio.h>

int main()
{
	char n, x;
	printf("Enter the value: ");
	scanf("%hhd", &n);
	printf("Enter the bit position: ");
        scanf("%hhd", &x);
	printf("After right shifted value will be: %hhd\n", n>>x);
	printf("The value of n is: %hhd\n", n);
}
