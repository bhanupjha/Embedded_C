#include<stdio.h>

int main()
{
	int i,j,s,num;
	printf("Enter the no.of lines: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		for(s=num-i; s>0; s--)
                {
                        printf(" ");
                }
		for(s=num-i; s>0; s--)
                {
                        printf(" ");
                }
		for(j=1; j<=i; j++)
                {
                        printf("*");
                }
		printf("\n");
	}

}
