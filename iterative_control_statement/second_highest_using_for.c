#include<stdio.h>

int main()
{
	int number, rem, highest=0, second_highest=0;
	printf("Enter the number: ");
	scanf("%d", &number);

	for(int temp=number; temp; temp= temp/10)
	{
		rem = temp%10;
		if(rem>highest)
		{
			second_highest= highest;
			highest= rem;
		}
		else if(rem>second_highest && rem!=highest)
		{
			second_highest=rem;
		}
	}
	printf("The highest digit of %d is: %d\n", number, highest);
	printf("The second highest digit of %d is: %d\n", number, second_highest);
}
