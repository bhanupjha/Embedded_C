#include<stdio.h>

int main()
{
	float min, flat_fee=5, bill, total_bill;
	printf("Enter the no.of minutes used: ");
	scanf("%f", &min);
	if(min<=100)
	{
		bill = 0.50*min;
		total_bill = bill+flat_fee;
		printf("The total cost of mobile plan is: %f\n", total_bill);
	}
	else if(min<=250 && min>100)
		
        {
                bill = 0.40*min;
                total_bill = bill+flat_fee;
                printf("The total cost of mobile plan is: %f\n", total_bill);
        }
	else
        {
                bill = 0.30*min;
                total_bill = bill+flat_fee;
                printf("The total cost of mobile plan is: %f\n", total_bill);
        }



}
