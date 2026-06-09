#include<stdio.h>

int main()
{
	char ch, bitpos;
	printf("Enter the value: ");
	scanf("%hhd", &ch);
	printf("Enter the bit position: ");
        scanf("%hhd", &bitpos);
	(ch & (1 << bitpos))?printf("Bit is set or bit is 1\n"):printf("Bit is clear or bit is 0\n");

}
