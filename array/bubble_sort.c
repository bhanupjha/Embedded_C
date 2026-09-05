// bubble sort

#include<stdio.h>

void Input(int*, int);
void Print(int*, int);
void Sort(int*, int);
int main()
{
	int arr[5];
	Input(arr, 5);
	Print(arr, 5);
	Sort(arr, 5);
	printf("After sorting:\n");
	Print(arr, 5);
}

void Input(int *p, int n)
{
	printf("Enter the Elements:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &p[i]);
	}
}

void Print(int *p, int n)
{
	printf("Printing the elements:\n");
	for(int i=0; i<n; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
}

void Sort(int *p, int n)
{
	int temp, i, j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}
