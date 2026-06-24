#include<stdio.h>
#include<math.h>
int isprime(int);
int main()
{
	int min, max;
	printf("Enter the min and max range: ");
	scanf("%d %d", &min, & max);
	
	for(;min<=max; min++)
	{
		if(isprime(min))
		{
			printf("%d\n", min);
		}
	}
}

int isprime(int n)
{
	int s=sqrt(n), i;
	if(n==1 || n==0)
	{

		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		for(i=2; i<=s; i++)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}
