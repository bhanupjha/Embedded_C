//A
//b B
//C c C
//d D d D
//E e E e

#include<stdio.h>
int main()
{
	int i,j,n;
	char ch=65, che=97;

	printf("Enter the number of lines: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			((i+j)%2)?printf("%2c", che):printf("%2c", ch);
			if(i==j)
			{
				ch++;
				che++;
			}
		}
		printf("\n");
	}
}
