#include<stdio.h>
void printbinary(int);
int main()
{
	int num, bitpos;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the bitpos: ");
        scanf("%d", &bitpos);
	printbinary(num);
	num = num^(1<<bitpos);
	printbinary(num);	
}

void printbinary(int n)
{
	int i;
	for(i=31; i>=0; i--)
	{
		(n&(1<<i))?printf("1"):printf("0");
	}
	printf("\n");
}

