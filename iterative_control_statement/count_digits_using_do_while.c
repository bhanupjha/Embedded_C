#include<stdio.h>

// count no of digits in a given integer
int main()
{
	int number, count = 0, t;
	printf("Enter the number: ");
	scanf("%d", &number);
	t=number;

	// removing last digit by /10
	do
	{
		t=t/10;
		count++;
	}while(t);
	printf("No.of digits in %d is %d\n", number, count);
}
