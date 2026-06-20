#include<stdio.h>
void add();// function without args and without return type
int main()
{
	add();
}

void add()
{
	int f_num, s_num, sum;
        printf("Enter the first number: ");
        scanf("%d", &f_num);
        printf("Enter the second number: ");
        scanf("%d", &s_num);
	sum= f_num+s_num;
	printf("sum of the two numbers is: %d\n", sum);
}


