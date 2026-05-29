#include<stdio.h>

int  main()
{
	int num; 
	long long int fact=1;
	printf("Enter the number: ");
	scanf("%d", &num);

	for(int i =1;i<=num;i++)
	{	
		fact = i*fact;
	}
	printf("Factorial of %d is : %lld\n", num, fact);
}
