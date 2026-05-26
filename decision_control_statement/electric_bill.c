#include<stdio.h>

int main()
{
	float unit, surcharge, bill, total_bill;
	printf("Enter the electricity unit charge: ");
	scanf("%f", &unit);
	if(unit<=50)
	{
		bill = 0.50*unit;
		surcharge = (bill*20)/100;
		total_bill = bill+surcharge;
		printf("The total electricity bill is: %f\n", total_bill);
	}
	else if(unit<=150 && unit>50)
        {
                bill = 0.75*unit;
                surcharge = (bill*20)/100;
                total_bill = bill+surcharge;
                printf("The total electricity bill is: %f\n", total_bill);
        }
	else if(unit<=250 && unit>150)
        {
                bill = 1.20*unit;
                surcharge = (bill*20)/100;
                total_bill = bill+surcharge;
                printf("The total electricity bill is: %f\n", total_bill);
        }
	else
        {
                bill = 1.50*unit;
                surcharge = (bill*20)/100;
                total_bill = bill+surcharge;
                printf("The total electricity bill is: %f\n", total_bill);
        }



}
