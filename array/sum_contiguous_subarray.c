#include<stdio.h>
void input(int *, int);
void print(int *, int);
void sum_contiguous(int *, int, int *);
int main()
{
	int a[10], n, max_sum=0;
	printf("Enter how many elements want to store: ");
	scanf("%d", &n);
	input(a, n);
	print(a, n);
        sum_contiguous(a, n, &max_sum);
	printf("Maximum sum of any contiguous array is: %d\n", max_sum);
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
	printf("Printing the array: ");
        for(int i=0; i<n; i++)
        {
                printf("%d ", p[i]);
        }
	printf("\n");
}


void sum_contiguous(int *p, int n, int *max)
{
	int k,sum=0;
	printf("Enter the value of k: ");
	scanf("%d", &k);
	for(int j=0; j<n-k+1; j++)
	{
		sum=0;
		for(int i=j; i<k+j; i++)
		{
			sum=sum+p[i];
		}
		if(sum>*max)
		{
			*max=sum;
		}
	}
}

