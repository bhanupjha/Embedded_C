// WAp to count digit if number given

#include <stdio.h>

int main()
{
	int num, cnt=0;
	printf("Enter the number: \n");
	scanf("%d", &num);
	do
	{
		num%10;
		cnt++;
		num = num/10;
	}while(num!=0);
	printf("count of digit is: %d\n", cnt); 
}
