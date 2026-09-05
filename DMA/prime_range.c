// WAP of array of prime Nos. b/w given range , check for prime no, if prime resize the array size & insert the prime

#include<stdio.h>
#include<stdlib.h>

void Print(int*);
int isprime(int);

int cnt;

int main()
{
	int *ptr=NULL;
	int min, max, res;
	printf("Enter the min and max:\n");
	scanf("%d %d", &min, &max);
	for(;min<=max; min++)
	{
		if(res=isprime(min))
		{
			ptr=realloc(ptr, ((cnt+1)*sizeof(int)));
			ptr[cnt]=min;
			cnt++;
		}

	}
	Print(ptr);
}

void Print(int *p)
{
	for(int i=0; i<cnt; i++)
	{
		printf("%d ", p[i]);
	}
}

int isprime(int n)
{
	if((n==0) || (n==1))
	{
		return 0;
	}
	for(int i=2; i<n; i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
