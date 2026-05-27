#include<stdio.h>

int main()
{
	int age;
	printf("Enter the age: ");
	scanf("%d", &age);

	if(age<=5 || age>=60)
	{
		printf("Ticket is free\n");
	}
	else if(age>5 && age<=12)
        {
                printf("Ticket price is $5.00\n");
        }
	else if(age>12 && age<=18)
        {
                printf("Ticket price is $8.00\n");
        }
	else
        {
                printf("Ticket price is $10.00\n");
        }

}
