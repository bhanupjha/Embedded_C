#include<stdio.h>

int main()
{
	int n, i, j, s;
	printf("Enter the no.of lines: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(s=1; s<i; s++)
		{
			printf(" ");
		}
		for(j=0; j<=n-i; j++)
		{
			printf("*");
		}
		printf("\n");
                
	}
}
