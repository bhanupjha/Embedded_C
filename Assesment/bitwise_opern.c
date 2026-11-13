// WAP take the input and set the bit, clear a bit, status of bit, toggle a bit
// it is using sequentially means one operation result we are modifying and store to num
#include <stdio.h>

int main()
{
	int num, bitpos;
	printf("Enter the number: \n");
	scanf("%d", &num);
	printf("Enter the bitpos: \n");
	scanf("%d", &bitpos);
	printf("Number: %d\n", num);
	printf("Bitpos: %d\n", bitpos);
	num = (num |(1<<bitpos));  // set a bit
	printf("Number: %d\n", num);
	num = (num & (~(1<<bitpos)));  // clear a bit
	printf("Number: %d\n", num);
	num = (num ^ (1<<bitpos));    // togglle a bit
	printf("Number: %d\n", num);
	// status of bit
	printf("status: %d\n", ((num>>bitpos)&1));
}
