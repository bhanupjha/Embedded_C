#include<stdio.h>
void input(int *, int);
void delete(int *, int, int);
void print(int *, int);
int main()
{
	int arr[10], elements, index;
	printf("Enter how many elements want to store: ");
	scanf("%d", &elements);
	input(arr, elements);
	print(arr, elements);
	printf("Enter the index number where want to delete the element: ");
        scanf("%d", &index);
	delete(arr, elements, index);
	elements--;
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

void delete(int *a, int n, int index)
{
	for(int i=index; i<n; i++)
	{
		a[i]=a[i+1];
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
