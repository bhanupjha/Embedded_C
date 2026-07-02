#include<stdio.h>
void input(int *, int);
void rotate(int *, int, int);
void print(int *, int);
int main()
{
	int arr[10], elements, shift;
	printf("Enter how many elements want to store: ");
	scanf("%d", &elements);
	input(arr, elements);
	print(arr, elements);
	printf("Enter the times for rotating in right: ");
        scanf("%d", &shift);
	rotate(arr, elements, shift);
	print(arr, elements);
}

void input(int *a, int n)
{
	printf("Enter the elements: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void rotate(int *a, int n, int shift)
{
	for(int j=shift; j>0; j--)
	{
		int temp= a[n-1];
		for(int i=n-1; i>=0; i--)
		{
			a[i]=a[i-1];
		}
		a[0]=temp;
	}
}

void print(int *a, int n)
{
	printf("printing the array: ");
	for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
