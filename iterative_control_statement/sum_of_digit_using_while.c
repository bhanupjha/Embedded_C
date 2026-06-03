#include<stdio.h>

int main()
{
	int number, t, rem, sum=0;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	t=number;
	while(t)
	{
		rem = t%10;  //first extract the digit
		sum = sum+rem;
		t = t/10; //remove the digit

	}
	printf("The sum of the digit of %d is: %d\n", number, sum);
}
