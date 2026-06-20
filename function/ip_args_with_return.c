#include<stdio.h>
int add(int, int);// function with aargs and with return type
int main()
{
	int f_num, s_num, sum;
	printf("Enter the first number: ");
	scanf("%d", &f_num);
	printf("Enter the second number: ");
        scanf("%d", &s_num);
	sum=add(f_num, s_num);
	printf("sum of the two numbers is: %d\n", sum);
}

int add(int n1, int n2)
{
	return n1+n2;
}


