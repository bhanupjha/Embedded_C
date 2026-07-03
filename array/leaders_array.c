#include<stdio.h>
void input(int *, int);
void print(int *, int);
void leader(int *, int);
int main()
{
	int arr[10], n;
	printf("Enter how many elements you want to print: ");
	scanf("%d", &n);
	input(arr, n);
	print(arr, n);
	leader(arr, n);
}

void input(int *p, int n)
{
	printf("Enter the elements: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &p[i]);
	}
}

void print(int *p, int n)
{
        printf("printing the array elements: ");
        for(int i=0; i<n; i++)
        {
		printf("%d ", p[i]);
        }
	printf("\n");
}

void leader(int *p, int n)
{
	for(int i=0; i<n; i++)
	{
		int isleader=1;
		for(int j=i+1; j<n; j++)
		{
			if(p[i]<p[j])
			{
				isleader=0;
				break;
			}
		}
		if(isleader==1)
		{
			printf("Leaders in array is: %d\n", p[i]);
		}
	}
}
