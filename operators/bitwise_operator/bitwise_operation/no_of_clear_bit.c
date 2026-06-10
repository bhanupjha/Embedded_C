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
		}
		else
		{
			printf("0");
		}
	}
	
	for(bit_pos=31; bit_pos>0; bit_pos--)
	{
		 if(((num & (1<<bit_pos))==0) && ((num & (1<<bit_pos - 1))==0))
		 {
			count++;
			bit_pos--;
		 }
	}
	printf("\nNo.of clear pair bit in %d is: %d\n", num, count);
}
