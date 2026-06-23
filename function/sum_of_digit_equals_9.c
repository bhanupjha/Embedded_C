#include<stdio.h>
int sum_digit(int);
int main()
{
	int min, max, i, flag=0;
	printf("Enter the min and max range: ");
	scanf("%d %d", &min, &max);
	for(i=min; i<=max; i++)
	{
		if((sum_digit(i))==1)
		{
			flag=1;
			printf("%d ", i);
		}
	}
	if(flag==0)
	{
		printf("There is no digit present in range that sum equals to 9");
	}
	printf("\n");
}

int sum_digit(int n)
{
	int temp=n, sum, rem;
	while(temp>9)
	{
		sum=0;
		while(temp)
		{
			rem=temp%10;
			sum=sum+rem;
			temp= temp/10;
		}
		temp=sum;
	}
	if(temp==9)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
