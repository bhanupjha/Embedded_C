#include<stdio.h>

int main()
{
	char ch;
	int bit_pos;
	printf("Enter the character: ");
	scanf("%c", &ch);
	printf("Binary digit of %c is: ", ch);

	for(bit_pos=7; bit_pos>=0; bit_pos--)
	{
		if(ch & (1<<bit_pos))
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
