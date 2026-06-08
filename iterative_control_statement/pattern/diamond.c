#include<stdio.h>

int main()
{
	int i, j, s, n;
	printf("Enter the no.of lines: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(s=1; s<=n-i; s++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=1; i<=n; i++)
        {
                for(s=1; s<=i-1; s++)
                {
                        printf(" ");
                }
                for(j=n; j>=i; j--)
                {
                        printf("* ");
                }
                printf("\n");
        }
}
