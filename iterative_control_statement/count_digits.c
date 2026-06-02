#include<stdio.h>

// count no of digits in a given integer
int main()
{
	int number, count = 0;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	// removing last digit by /10
	for(int temp=number; temp; temp=temp/10)
	{	
		count++;
	}
	printf("%d\n", count);
}
