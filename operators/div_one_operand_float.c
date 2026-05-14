#include<stdio.h>

int main()
{
	int op1;
	float op2, res;
	printf("Enter the Operands first in integer second in float: ");
	scanf("%d %f", &op1, &op2);
	// its perform operation based on data type priority i.e double - float - long long int ---- char, 
	// so op1/op2(int/float) -> float.
	res = op1/op2; 
	printf("Division of two operands stored in float i.e res: %f", res);

}
