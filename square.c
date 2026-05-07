#include<stdio.h>

int square();
int main()
{
	int num, num2;
	printf("Enter the  Number: ");
	scanf("%d", &num);
	num2 = square(num);
	printf("Entered number %d Squared root is %d\n", num, num2);
}

int square(int a)
{
	return a*a;
}
