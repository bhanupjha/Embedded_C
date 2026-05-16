#include<stdio.h>

int main()
{
	int val1, val2;
	printf("Enter the two values: ");
	scanf("%d %d", &val1, &val2);
	val1>val2?printf("%d is greater", val1):printf("%d is greater", val2);

}
