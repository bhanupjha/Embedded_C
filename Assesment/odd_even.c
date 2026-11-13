// WAP to check no. is odd or even
// n & 1 -> 1 -> odd
// n & 1 -> 0 -> even

#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number: \n");
	scanf("%d", &num);
	printf("Number: %d\n", num);
	(num & 1)?printf("Number is odd\n"):printf("Number is even\n");
}
