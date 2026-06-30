#include<stdio.h>
void input(int *, int);
void print(int *, int);
int secondhigh(int *, int);
int main()
{
	int element[5], secondhighest;
	input(element,5);
	print(element,5);
	secondhighest=secondhigh(element,5);
	printf("second Highest element in array is: %d\n", secondhighest);
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

int secondhigh(int * p, int a)
{
	int highelement=p[0];
	int second_high=0;
	for(int i=1; i<a; i++)
	{
		if(p[i]>highelement)
		{
			second_high=highelement;
			highelement=p[i];
		}
		else if(p[i]>second_high && p[i]!=highelement)
		{
			second_high=p[i];
		}
	}
	printf("\n");
	return second_high;
}
