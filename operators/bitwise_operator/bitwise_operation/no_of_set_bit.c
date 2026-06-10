#include<stdio.h>

int main()
{
	int num, bit_pos, count=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Binary digit of %d is: ", num);

	for(bit_pos=31; bit_pos>=0; bit_pos--)
	{
		if(num & (1<<bit_pos))
		{
			printf("1");
			count++;
		}
		else
		{
			printf("0");
		}
	}
	printf("\nNo.of set bit in %d is: %d\n", num, count);
}
