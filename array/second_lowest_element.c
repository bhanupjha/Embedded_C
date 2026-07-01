#include<stdio.h>
void input(int *, int);
void print(int *, int);
int secondlowest(int *, int);
int main()
{
	int element[5], second_lowest;
	input(element,5);
	print(element,5);
	second_lowest=secondlowest(element,5);
	printf("second lowest element in array is: %d\n", second_lowest);
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

int secondlowest(int * p, int a)
{
	int lowest=p[0];
	int second_lowest=p[a-1];
	for(int i=1; i<a; i++)
	{
		if(p[i]<lowest)
		{
			second_lowest=lowest;
			lowest=p[i];
		}
		else if(p[i]<second_lowest && p[i]!=lowest)
		{
			second_lowest=p[i];
		}
	}
	printf("\n");
	return second_lowest;
}
