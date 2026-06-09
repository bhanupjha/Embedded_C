#include<stdio.h>

int main()
{
	int n, i, j;

	for(i=1; i<=7; i++)
	{
		
		for(j=7; j>=i; j--)
		{
			printf("%d", j);
		
		}
		printf("\n");
                
	}
}
