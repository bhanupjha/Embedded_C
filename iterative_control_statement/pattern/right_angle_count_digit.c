#include<stdio.h>

int main()
{
	int n, count=1, i, j;
	printf("Enter the no.of lines you want to print pattern: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{	
			printf("%3d",count++);
		}
		printf("\n");
	}

}
