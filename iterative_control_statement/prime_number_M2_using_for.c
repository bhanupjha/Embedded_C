#include<stdio.h>

//this method is working on factor, in prime number factor is 1 & itself, 
//2 -> 1,2  - prime
//23 -> 1,23  - prime
//8 -> 1,2,4,8 - non prime
//24 -> 1,2,3,4,6,8,12,24 - non prime
int main()
{
	int number, count=0, i;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	//if number is divisible by other than 1 & itself -> non prime
	for(i=2; i<number; i++)
	{
		if(number%i==0)
		{
			break;
		}
	}
	if(i==number)
	{
		printf("%d is prime number\n", number);
	}
	else
	{
		printf("%d is not prime number\n", number);
	}
	
	
}
