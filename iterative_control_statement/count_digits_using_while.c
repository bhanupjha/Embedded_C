#include<stdio.h>

// count no of digits in a given integer
int main()
{
	int number, count = 0, t;
	printf("Enter the number: ");
	scanf("%d", &number);
	t=number;

	// removing last digit by /10
	while(t)
	{
		t = t/10;
		count++;
	}
	printf("%d\n", count);
}
