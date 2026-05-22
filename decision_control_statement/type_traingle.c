#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Enter the first side of traingle: ");
	scanf("%d", &a);
	printf("Enter the second side of traingle: ");
        scanf("%d", &b);
	printf("Enter the third side of traingle: ");
        scanf("%d", &c);

	if((a==b) && (b==c))
	{
		printf("This traingle is equilateral traingle\n");
	}
	else if((a==b)|(b==c)|(a==c))
	{
		printf("This traingle is Isoceles traingle\n");
	}	
	else
	{
		printf("The traingle is scalene traingle\n");
	}
 
}

