#include<stdio.h>
int add();// function without args and with return type
int main()
{
	int sum;
	sum=add();
	printf("sum of the two numbers is: %d\n", sum);
}

int add()
{
	int f_num, s_num;
        printf("Enter the first number: ");
        scanf("%d", &f_num);
        printf("Enter the second number: ");
        scanf("%d", &s_num);
	return f_num+s_num;
}


