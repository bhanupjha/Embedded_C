#include<stdio.h>
void amstrg(int);
int countdigit(int);
int remainder(int,int);
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	amstrg(num);
}

void amstrg(int n)
{
	int rem, val, sum=0, t=n;
	while(t)
	{
		rem=t%10;
		val=remainder(rem,n);
		sum=sum+val;
		t=t/10;
	}
	if(n==sum)
	{
		printf("%d is a armstrg no", n);
	}
	else
	{
		printf("%d is not a armstrg no", n);
	}

}

int remainder(int n, int m)
{
	int t=n,i,result=1;
	int val=countdigit(m);
	for(i=1; i<=val; i++)
	{ 
		result=result*t;
	}
	return result;
}

int countdigit(int n)
{
        int rem, count=0;
        while(n)
        {
                rem=n%10;
                count++;
                n=n/10;
        }
        return count;
}
