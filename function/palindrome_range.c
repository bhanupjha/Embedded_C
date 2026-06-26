#include<stdio.h>
int palindrome(int);
int main()
{
	int num, num2, i;
	printf("Enter the number in range: ");
	scanf("%d %d", &num, &num2);
	for(i=num; i<=num2; i++)
	{
		if(palindrome(i)==1)
		{
			printf("%d ", i);
		}
	}


}

int palindrome(int n)
{
	int temp=n,rem, rev=0;
	for(; temp; temp=temp/10)
	{
		rem=temp%10;
		rev=rev*10+rem;
	}
	if(n==rev)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
