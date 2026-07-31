//Write a program to sort the elements in a descending order and ascending order

#include<stdio.h>
#include<string.h>
void input(int*, int);
void print(int*, int);
void descending(int* arr, int n);
void ascending(int* arr, int n);
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
	int n, highest, lowest;
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
        descending(arr, n);
	ascending(arr, n);
}

void descending(int* arr, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("printing the array in descending order:\n");
	print(arr,n);
}

void ascending(int* arr, int n)
{
        for(int i=0; i<n; i++)
        {
                for(int j=i+1; j<n; j++)
                {
                        if(arr[i]>arr[j])
                        {
                                int temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }
        printf("printing the array in ascending order:\n");
        print(arr,n);
}
