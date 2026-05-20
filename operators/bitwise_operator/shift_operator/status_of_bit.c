#include<stdio.h>

int main()
{
	char ch, bitpos;
	printf("Enter the value: ");
	scanf("%hhd", &ch);
	printf("Enter the bit position: ");
        scanf("%hhd", &bitpos);
	char z= ch & (1<<bitpos);
	printf("The value of z: %hhd\n", z);
	(z==0)?printf("Bit is clear or bit is 0\n"):printf("Bit is set or bit is 1\n");

}
