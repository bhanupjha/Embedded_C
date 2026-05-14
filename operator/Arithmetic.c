#include<stdio.h>

int main()
{
	int num1, num2, res;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
        scanf("%d", &num2);
	res = num1 + num2; 
	printf("First & Second Number sum is: %d\n", res);
	res = num1 - num2;
	printf("First & Second Number subtraction is: %d\n", res);
	res = num1 *  num2;
	printf("First & Second Number Multiplication is: %d\n", res);
	res = num1 / num2;
	printf("First & Second Number division is: %d\n", res);
	res = num1 % num2;
	printf("First & Second Number Modulous(Remainder) is: %d\n", res);

}
