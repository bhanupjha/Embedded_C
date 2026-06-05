#include<stdio.h>

int main()
{
	int n;
	printf("Enter the no.of lines you want to print pattern: ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

}
