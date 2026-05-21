#include<stdio.h>

int main()
{
	int cp, sp, profit, loss;
	printf("Enter the cost price: ");
	scanf("%d", &cp);
	printf("Enter the selling price: ");
        scanf("%d", &sp);
	if(sp > cp)
	{
	       profit = sp - cp;
       	       printf("The profit is: Rs %d \n", profit);	       
		
	}
	else
	{
		loss = cp - sp;
		printf("The loss is: Rs %d\n",loss);
	}
	
}
