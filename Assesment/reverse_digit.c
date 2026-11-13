// WAP to reverse the digit

#include <stdio.h>

int main()
{
	int num, rev=0, digit;
	printf("Enter the number: \n");
	scanf("%d", &num);
	printf("Number: %d\n", num);
	while(num != 0)
	{
		digit=num%10;
		rev = ((rev*10)+digit);
		num = num/10;
	}
	printf("Reverse: %d\n", rev);
}
