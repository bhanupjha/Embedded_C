#include<stdio.h>
void input(int *, int);
void print(int *, int);
void nrepeat(int *, int);
int main()
{
	int arr[10], n;
	printf("Enter how many elements you want to print: ");
	scanf("%d", &n);
	input(arr, n);
	print(arr, n);
	nrepeat(arr, n);
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

void nrepeat(int *p, int n)
{
	int cnt, i, j;
	for(i=0; i<n; i++)
	{
		cnt=0;
		for(j=0; j<n; j++)
		{
			if(p[i]==p[j])
			{
				cnt++;
			}
		}
		if(cnt==1)
		{
                	printf("%d ", p[i]);
		}
	}
	printf("\n");
}
