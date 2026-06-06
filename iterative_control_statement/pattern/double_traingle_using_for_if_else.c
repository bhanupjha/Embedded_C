#include<stdio.h>

int main()
{
	int i,j,num;
	printf("Enter the no.of lines: ");
	scanf("%d", &num);

	for(i=1;i<=num;i++)
	{
		for(j=1; j<=i; j++)
		{
			if(j<=i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for(j=num; j>=1; j--)
		{           
	       		if(j<=i)
                	{
                		printf("*");
                	}
                	else
                	{
                		printf(" ");
                	}
		}
		printf("\n");
	}

}
