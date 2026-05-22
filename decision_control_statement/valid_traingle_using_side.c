#include<stdio.h>

int main()
{
	int side1, side2, side3, sum;
	printf("Enter the first side of traingle: ");
	scanf("%d", &side1);
	printf("Enter the second side of traingle: ");
        scanf("%d", &side2);
	printf("Enter the third side of traingle: ");
        scanf("%d", &side3);

	if((side1 + side2) > side3)
	{
		printf("This traingle is valid\n");
	}
	else if((side1 + side3) > side2)
	{
		printf("This traingle is valid\n");
	}	
	else if((side2 + side3) > side1)
	{
		printf("This traingle is valid\n");
	}
	else
	{
		printf("The traingle is not valid\n");
	}
 
}

