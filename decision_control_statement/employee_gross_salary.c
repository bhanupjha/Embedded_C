#include<stdio.h>

int main()
{
	int basic_salary, HRA, DA, total;
	printf("Enter the basic salary of employee: ");
	scanf("%d", &basic_salary);

	if(basic_salary <= 10000)
	{
		HRA = (20 * basic_salary)/100;
		DA = (80 * basic_salary)/100;
		total = basic_salary+ HRA+ DA;
		printf("Employee gross salary is: %d\n", total); 
	}
	else if(basic_salary > 10001 && basic_salary < 20000)
	{
		HRA = (25 * basic_salary)/100;
                DA = (90 * basic_salary)/100;
                total = basic_salary+ HRA+ DA;
                printf("Employee gross salary is: %d\n", total);
	}
	else
	{
		HRA = (30 * basic_salary)/100;
                DA = (95 * basic_salary)/100;
                total = basic_salary+ HRA+ DA;
                printf("Employee gross salary is: %d\n", total);
	}
}
