#include<stdio.h>

int main()
{
	char ch, t;
	int bitpos;
	printf("Enter the value: ");
	scanf("%hhd", &ch);
	printf("Enter the bit position: ");
	scanf("%d", &bitpos);

	t = ch ^ (1<<bitpos);
	printf("After toggling %dth bit of %hhd, new value became %hhd\n", bitpos, ch, t);
	
}
