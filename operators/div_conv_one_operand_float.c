#include<stdio.h>

int main()
{
	int op1, op2;
	float res, res1;
	printf("Enter the Operands in integer: ");
	scanf("%d %d", &op1, &op2);
	// its perform operation based on data type i.e on integer then convert into float.
	res = op1/op2; // it gives value 3.000000
        res1 = (float)op1/op2; // it converted one operand that is in integer -> float ,  Now op1 -> float, op2 -> int = float 
	printf("Division of two operands stored in float i.e res: %f\n", res);
	printf("Division of two operands stored in float i.e res: %f\n", res1);

}
