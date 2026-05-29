#include<stdio.h>

int  main()
{
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	printf("Factor of %d is : \n", num);

	for(int i =1; i<=num; i++)
	{
		if(num%i==0)
		{
			printf("%d\n", i);
		}
	}
}
