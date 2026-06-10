#include<stdio.h>

int main()
{
	char  num;
	int bit_pos, lgst=0;
	printf("Enter the number: ");
	scanf("%c", &num);
	printf("Binary digit of %c is: ", num);

        for(bit_pos=7; bit_pos>=0; bit_pos--)
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
	for(bit_pos=7; bit_pos>0;)
	{
		int count=0;
       		while((num & (1<<bit_pos))==1)
        	{
                	count++;
                	if(count>lgst)
                	{
                        	lgst=count;
                	}
			bit_pos--;
        	}
		bit_pos--;
	}
//	int count=0;
//	while(num & (1<<bit_pos)==1)
//	{
//		count++;
//		if(count>lgst)
//		{
//			lgst=count;
//		}
//		bit_pos--;
//	}
	printf("\nlongest set bit series in %c is: %d\n", num, lgst);
}
