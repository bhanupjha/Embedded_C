#include<stdio.h>

int main()
{
	int height;
	printf("Enter the height of person in cm: ");
	scanf("%d", &height);

	if(height<=150)
	{
		printf("Dwarf\n");
	}
	else if(height>150 && height<165)
	{
		printf("Average height\n");
	}
	else
	{
		printf("Tall\n");
	}
}

