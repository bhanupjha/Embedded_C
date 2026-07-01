#include<stdio.h>
void input(int *, int);
void insert(int *, int, int);
void print(int *, int);
int main()
{
	int arr[10], elements, index, value;
	printf("Enter how many elements want to store: ");
	scanf("%d", &elements);
	input(arr, elements);
	print(arr, elements);
	printf("Enter the index number where want to store element: ");
        scanf("%d", &index);
	printf("Enter the value you want to insert: ");
        scanf("%d", &value);
	insert(arr, elements, index);
	arr[index]=value;
	elements++;
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

void insert(int *a, int n, int index)
{
	for(int i=n-1; i>=index; i--)
	{
		a[i+1]=a[i];
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
