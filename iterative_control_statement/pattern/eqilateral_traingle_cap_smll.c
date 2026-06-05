#include<stdio.h>

int main()
{
	int n, i, j, s;
	printf("Enter the no.of lines you want to print pattern: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		for(s=n-i; s>0; s--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			(i%2)?printf("%c ", 64+j):printf("%c ", 96+j);
		}
		printf("\n");
	}

}
