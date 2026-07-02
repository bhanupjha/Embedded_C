#include<stdio.h>
void input(int *, int);
void print(int *, int);
int checkprime(int);
void arrange_ele(int *, int);
int main()
{
	int a[10], n;
	printf("Enter how many elements want to store: ");
	scanf("%d", &n);
	input(a, n);
	print(a, n);
	arrange_ele(a, n);
	print(a,n);

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

int checkprime(int p)
{
	for(int i=2; i<p; i++)
	{
		if(p%i==0)
		{
			return 0;
		}
	}
	return 1;
}

void arrange_ele(int *p, int n)
{
	int temp, k=0;
	for(int i=0; i<n; i++)
	{
		if(checkprime(p[i]))
		{
			temp=p[i];
			for(int j=i; j>k; j--)
			{
				p[j]=p[j-1];
			}
			p[k]=temp;
			k++;
		}
	}
}

