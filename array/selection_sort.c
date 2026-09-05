// Selection sort

#include<stdio.h>

void Input(int*, int n);
void Print(int*, int n);
void Sort(int*, int n);
int main()
{
	int arr[5];
	Input(arr, 5);
	Print(arr, 5);
	Sort(arr, 5);
	printf("After sorting:\n");
	Print(arr, 5);
}

void Input(int *arr, int n)
{
	printf("Enter the elements:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void Print(int *arr, int n)
{
        printf("Printing the elements:\n");
        for(int i=0; i<n; i++)
        {
                printf("%d ", arr[i]);
        }
	printf("\n");
}

void Sort(int *arr, int n)
{
	int min_index, temp;
        for(int i=0; i<n-1; i++)
        {
		min_index=i;
                for(int j=i+1; j<n; j++)
		{
			if(arr[min_index]>arr[j])
			{
				// storing index
				min_index=j;
			}
		}
		//swap
		temp=arr[i];
		arr[i]=arr[min_index];
		arr[min_index]=temp;
        }
}
