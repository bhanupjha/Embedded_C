#include<stdio.h>
void input(int *, int);
void print(int *, int);
void leaders(int *, int);
int main()
{
	int a[10];
	input(a, 10);
	print(a, 10);
	leaders(a, 10);
}

void input(int *p, int b)
{
	for(int i=0; i<b; i++)
	{
		printf("Enter the elements: ");
		scanf("%d", &p[i]);
	}
}

void print(int *p, int b)
{
	for(int i=0; i<b; i++)
	{
		printf("%d, ", p[i]);
	}
	printf("\n");
}

void leaders(int *p, int b)
{
	for(int i=0; i<b; i++)
	{
		
	}
	printf("\n");
}
