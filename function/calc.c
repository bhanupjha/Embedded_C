#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int Div(int, int);
int mod(int, int);
int main()
{
	int op1, op2, reusult;
	char choice;
	while(1)
	{
		printf("Enter the first operand: ");
		scanf("%d", &op1);
		printf("Enter the second operand: ");
                scanf("%d", &op2);
		printf("a. Addition\ns. Subtraction\nm. Multiplication\nd. Division\np. Modulous\ne. Exit\n");
		printf("Enter the choice: ");
		__fpurge(stdin);
                scanf(" %c", &choice);
		switch(choice)
		{
			case 'a': printf("%d + %d = %d\n", op1, op2, add(op1, op2));
				  break;
		        case 's': printf("%d - %d = %d\n", op1, op2, sub(op1, op2));
				  break;
		        case 'm': printf("%d * %d = %d\n", op1, op2, mul(op1, op2));
				  break;
			case 'd': printf("%d / %d = %d\n", op1, op2, Div(op1, op2));
				  break;
			case 'p': printf("%d %% %d = %d\n", op1, op2, mod(op1, op2));
				  break;
			default:  printf("Your entered choice is wrong\n");
				  break;
			case 'e': exit(0);
		}
	}
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
        return a - b;
}

int mul(int a, int b)
{
        return a * b;
}

int Div(int a, int b)
{
        return a / b;
}

int mod(int a, int b)
{
        return a % b;
}
