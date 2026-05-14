#include<stdio.h>

int main()
{
	int num, y;
	printf("Enter the value of num is: ");
	scanf("%d", &num);
	y = ++num;
	printf("The updated value of variable after pre-increment is:\nnum value is: %d\ny value is:%d\n", num, y);
}
