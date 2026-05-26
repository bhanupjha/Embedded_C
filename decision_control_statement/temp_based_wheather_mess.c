#include<stdio.h>

int main()
{
	int temp;
	printf("Enter the temperature in centigrade: ");
	scanf("%d", &temp);

	if(temp<0)
	{
		printf("Freezing wheather\n");
	}
	else if(temp>=0 && temp<10)
	{
		printf("very cold wheather\n");
	}
        else if(temp>=10 && temp<20)
        {
                printf("cold wheather\n");
        }
	else if(temp>=20 && temp<30)
        {
                printf("Normal in temperature\n");
        }
	else if(temp>=30 && temp<40)
	{
		printf("its hot\n");
	}
	else
	{
		printf("its very hot\n");
	}
}
         

