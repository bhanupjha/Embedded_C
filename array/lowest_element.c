#include<stdio.h>
void input(int *, int);
void print(int *, int);
int lowestele(int *, int);
int main()
{
	int element[5], lowest;
	input(element,5);
	print(element,5);
	lowest=lowestele(element,5);
	printf("Lowest element in array is: %d\n", lowest);
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

int lowestele(int * p, int a)
{
	int lowest=p[0];
	for(int i=1; i<a; i++)
	{
		if(p[i]<lowest)
		{
			lowest=p[i];
		}
	}
	printf("\n");
	return lowest;
}
