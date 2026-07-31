//Write a program to print the highest and lowest element in an array.

#include<stdio.h>
void input(int*, int);
int high_element(int*, int);
int low_element(int*, int);
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
	highest=high_element(arr, n);
	printf("Highest element in array: %d\n", highest);
	lowest=low_element(arr, n);
        printf("Lowest element in array: %d\n", lowest);
}

int high_element(int* arr, int n)
{
	int high=arr[0];
	for(int i=0; i<n; i++)
	{
		if(arr[i]>high)
		{
			high=arr[i];
		}
	}
	return high;
}

int low_element(int* arr, int n)
{
        int low=arr[0];
        for(int i=0; i<n; i++)
        {
                if(arr[i]<low)
                {
                        low=arr[i];
                }
        }
        return low;
}
