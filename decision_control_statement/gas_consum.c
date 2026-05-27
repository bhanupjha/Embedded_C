#include<stdio.h>

int main()
{
	float gas_cons, tax, bill, total_bill;
	printf("Enter the usage of gas consumption in cubic meters: ");
	scanf("%f", &gas_cons);
	if(gas_cons<=50)
	{
		bill = 0.75*gas_cons;
		tax = (bill*10)/100;
		total_bill = bill+tax;
		printf("Total cost of gas consumption: %f\n", total_bill);
	}
	else if(gas_cons<=150 && gas_cons>50)
        {
                bill = 1.00*gas_cons;
                tax = (bill*10)/100;
                total_bill = bill+tax;
                printf("Total cost of gas consumption: %f\n", total_bill);
        }
	else if(gas_cons<=300 && gas_cons>150)
        {
                bill = 1.25*gas_cons;
                tax = (bill*10)/100;
                total_bill = bill+tax;
                printf("Total cost of gas consumption: %f\n", total_bill);
        }
	else
        {
                bill = 1.50*gas_cons;
                tax = (bill*10)/100;
                total_bill = bill+tax;
                printf("Total cost of gas consumption: %f\n", total_bill);
        }



}
