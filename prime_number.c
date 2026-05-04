#include<stdio.h>
int main()
{
	int number;
	printf("Enter the Number: ");
	scanf("%d", &number);
	if (number%2 == 0)
		printf("The number is Even\n");
	else
		printf("The number is odd\n");
		
}	
