#include<stdio.h>

int main()
{
	int angle1, angle2, angle3, sum;
	printf("Enter the angle1 of traingle: ");
	scanf("%d", &angle1);
	printf("Enter the angle2 of traingle: ");
        scanf("%d", &angle2);
	printf("Enter the angle3 of traingle: ");
        scanf("%d", &angle3);
        sum = angle1 + angle2 + angle3;
	printf("The sum of all three angle is: %d\n", sum);

	if(sum == 180)
	{
		printf("This traingle is valid\n");
	}
	else
	{
		printf("This traingle is not valid\n");
	}
}

