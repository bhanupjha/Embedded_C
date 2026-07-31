//Write a program to left rotate and right rotate the array n times

#include<stdio.h>
#include<string.h>
void input(int*, int);
void print(int*, int);
void left_rotate(int*, int, int);
void right_rotate(int*, int , int);
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
		printf("Enter the elements:\n");
		scanf("%d", &arr[i]);
	}
}
int main()
{
	int n, times;
	printf("No.of elements to store in array:\n");
	scanf("%d", &n);
	if(n<=0)
	{
		printf("Invalid input\n");
		return 0;
	}
	int arr[n];
	input(arr, n);
	print(arr, n);
	printf("How much times u want to rotate left:\n");
	scanf("%d", &times);
	left_rotate(arr, n, times);
	right_rotate(arr, n, times);
}

void left_rotate(int* arr, int n, int  times)
{
	for(int i=0; i<times; i++)
	{
		int temp=arr[0];
		for(int j=1; j<n; j++)
		{
			arr[j-1]=arr[j];
		}
		arr[n-1]=temp;
	}
	printf("Left Rotated array: \n");
	print(arr, n);
}

void right_rotate(int* arr, int n, int times)
{
	for(int i=0; i<times; i++)
	{
		int temp=arr[n-1];
		for(int j=n-1; j>0; j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
	printf("Right Rotated array: \n");
        print(arr, n);
}
