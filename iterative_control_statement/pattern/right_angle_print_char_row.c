#include<stdio.h>

int main()
{
	int n;
	char ch = 96;
	printf("Enter the no.of lines you want to print pattern: ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{	 
			printf("%2c", ch+j);
		}
		printf("\n");
	}

}
