#include<stdio.h>

int main()
{
	int op1, op2;
	float res;
	printf("Enter the operands that is in integer data type: ");
	scanf("%d %d", &op1, & op2);
	res = op1 /op2; // first it perform operation on int data type then internally convert it to float i.e float(Quotient) 
	printf("Division of two operands stored in float data type res: %f\n", res); // value will be quotient.000000


}
