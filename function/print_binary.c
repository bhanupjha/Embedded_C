#include<stdio.h>
void print_binary(int);
int main()
{
	int num, set_bit;
	printf("Enter the number: ");
	scanf("%d", &num);
	print_binary(num);
}

void print_binary(int n)
{
	int i;
	for(i=31; i>=0; i--)
	{
		(n&(1<<i))?printf("1"):printf("0");
	}
}
