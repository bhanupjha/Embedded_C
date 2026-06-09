#include<stdio.h>

int main()
{
	char ch;
	int bitpos;
	printf("Enter the value: ");
	scanf("%hhd", &ch);
	printf("Enter the bit position: ");
	scanf("%d", &bitpos);

	((ch>>bitpos) & 1)?printf("Bit is set or bit is 1\n"):printf("Bit is clear or bit is 0\n");
	
}
