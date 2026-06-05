#include<stdio.h>

int main()
{
	int i, j, num;
	printf("Enter the no.of lines: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=num-i; j>=0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
