#include<stdio.h>

int main()
{
	int i, j, num, count=1;
	printf("Enter the no.of lines: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		int val = 1;
		for(j=num-i; j>=0; j--)
		{
			printf("%2d", val++);
		}
		printf("\n");
	}

}
