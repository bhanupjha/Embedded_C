#include<stdio.h>
#include<math.h>

//this method is working on square root of entered number
int main()
{
	int number, i, s;
	printf("Enter the number: ");
	scanf("%d", &number);
	s = sqrt(number);

	for(i=2; i<=s; i++)
	{
		if(number%i==0)
		{
			break;
		}
	}
	if(i==s+1)
	{
		printf("%d is prime number\n", number);
	}
	else
	{
		printf("%d is not a prime number\n", number);
	}
	
	
}
