#include<stdio.h>
void input(int *, int);
void print(int *, int);
int highele(int *, int);
int main()
{
	int element[5], highestele;
	input(element,5);
	print(element,5);
	highestele=highele(element,5);
	printf("Highest element in array is: %d\n", highestele);
}

void input(int * p, int a)
{
	for(int i=0; i<a; i++)
	{
		printf("Enter the Elements: ");
		scanf("%d", &p[i]);
	}
}

void print(int * p, int a)
{
	for(int i=0; i<a; i++)
	{
		printf("%d, ", p[i]);
	}
}

int highele(int * p, int a)
{
	int highelement=p[0];
	for(int i=1; i<a; i++)
	{
		if(p[i]>highelement)
		{
			highelement=p[i];
		}
	}
	printf("\n");
	return highelement;
}
