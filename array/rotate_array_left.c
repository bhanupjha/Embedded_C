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
	printf("Enter the times for rotating in left: ");
        scanf("%d", &shift);
	rotate(arr, elements, index);
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

void rotate(int *a, int n, int index)
{
	int temp= a[0];
	for(int i=1; i<n; i++)
	{
		a[i-1]=a[i];
	}
	a[n-1]=temp
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
