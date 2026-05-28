#include<stdio.h>

int main()
{
	int op1, op2, choice, res;
	printf("This is 2 digit menu based calculator\n");
	printf("Enter the first number: ");
	scanf("%d", &op1);
	printf("Enter the second number: ");
        scanf("%d", &op2);
	printf("Press:-\n1.Addition\n2.Subtraction\n3.Multiply\n4.Division\n5.Modulous\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1: res = op1+op2;
			printf("Addition of first and second number is: %d\n", res);
			break;
		case 2: res = op1-op2;
                        printf("Subtraction of first and second number is: %d\n", res);
			break;
		case 3: res = op1*op2;
                        printf("Multiplication of first and second number is: %d\n", res);
			break;
		case 4: res = op1/op2;
                        printf("Division of first and second number is: %d\n", res);
			break;
		case 5: res = op1%op2;
                        printf("Modulous of first and second number is: %d\n", res);
			break;
		default: printf("Your choice is invalid\n");
	}

			
}
