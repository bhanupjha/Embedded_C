#include<stdio.h>
int sum_digit(int);
int main()
{
	int f=0;
	int min, max, i;
	printf("Enter the min and max range: ");
	scanf("%d %d", &min, &max);
	for(i=min; i<=max; i++)
	{
		if((sum_digit(i))==1)
		{
			f=1;
			printf("%d ", i);
		}
	}
	if(f==0){
		printf("no digit sum is equal to 7\n");
	}
}

int sum_digit(int n)
{
	int temp=n, digit, sum;
	while(temp>9)
	{
		sum=0;
		while(temp)
		{
			digit= temp%10;
			sum=sum+digit;
			temp=temp/10;
		}
		temp=sum;

	}
	if(sum==7)
	{
		return 1;
	}	
	else
	{
		return 0;
	}
}
