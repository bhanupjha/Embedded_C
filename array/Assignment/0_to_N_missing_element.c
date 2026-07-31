//Write a program to find the missing element in a sequence from 0 to N

#include<stdio.h>
#include<string.h>
void input(int*, int);
void print(int*, int);
int sumarr(int*, int);
void print(int* arr, int n)
{
	printf("printing the array:\n");
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void input(int* arr, int n)
{
	for(int i=0; i<n; i++)
	{
		printf("Enter the elements in sequence:\n");
		scanf("%d", &arr[i]);
	}
}
int main()
{
	int n, total, sum, missing;
	printf("No.of elements to store in array:\n");
	scanf("%d", &n);
	if(n<=0)
	{
		printf("Invalid input\n");
		return 0;
	}
	total= n*(n+1)/2;
	int arr[n];
	input(arr, n);
	print(arr, n);
	sum=sumarr(arr, n);
	missing= total-sum;
	printf("Missing elements: %d\n", missing);
}

int sumarr(int* arr, int n)
{
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
