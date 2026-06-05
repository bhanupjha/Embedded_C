#include<stdio.h>

int main()
{
	int n;
	char cp = 96, sm = 64;
	printf("Enter the no.of lines you want to print pattern: ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{	 
			(i%2)?printf("%2c", cp+j):printf("%2c", sm+j);
		}
		printf("\n");
	}

}
