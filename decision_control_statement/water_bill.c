#include<stdio.h>

int main()
{
	float gallon, surcharge, bill, total_bill;
	printf("Enter the usage of water in gallons: ");
	scanf("%f", &gallon);
	if(gallon<=50)
	{
		bill = 1.00*gallon;
		surcharge = (bill*15)/100;
		total_bill = bill+surcharge;
		printf("The total water bill is: %f\n", total_bill);
	}
	else if(gallon<=150 && gallon>50)
        {
                bill = 1.50*gallon;
                surcharge = (bill*15)/100;
                total_bill = bill+surcharge;
                printf("The total water bill is: %f\n", total_bill);
        }
	else if(gallon<=250 && gallon>150)
        {
                bill = 2.00*gallon;
                surcharge = (bill*15)/100;
                total_bill = bill+surcharge;
                printf("The total water bill is: %f\n", total_bill);
        }
	else
        {
                bill = 2.50*gallon;
                surcharge = (bill*15)/100;
                total_bill = bill+surcharge;
                printf("The total water bill is: %f\n", total_bill);
        }



}
