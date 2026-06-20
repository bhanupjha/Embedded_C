#include<stdio.h>
void add(int, int);// function with args and without return type
int main()
{
	int f_num, s_num, sum;
	printf("Enter the first number: ");
	scanf("%d", &f_num);
	printf("Enter the second number: ");
        scanf("%d", &s_num);
	add(f_num, s_num);
}

void add(int n1, int n2)
{
	printf("sum of the two numbers is: %d\n", n1+n2);
}


