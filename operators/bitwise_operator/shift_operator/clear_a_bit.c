#include<stdio.h>

int main()
{
	char ch, t;
	int bitpos;
	printf("Enter the value: ");
	scanf("%hhd", &ch);
	printf("Enter the bit position: ");
	scanf("%d", &bitpos);

	t = ch & ~(1<<bitpos);
	printf("%dth bit of %hhd is clear or 0, new value became %hhd\n", bitpos, ch, t);
	
}
