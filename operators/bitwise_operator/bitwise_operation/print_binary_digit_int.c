#include<stdio.h>

int main()
{
	int num;
	int bit_pos;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Binary digit of %d is: ", num);

	for(bit_pos=31; bit_pos>=0; bit_pos--)
	{
		if(num & (1<<bit_pos))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}
