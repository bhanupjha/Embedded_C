#include<stdio.h>

int  main()
{
	int num, add=0; 
	printf("Enter the number: ");
	scanf("%d", &num);

	for(int i =1;i<=num;i++)
	{	
		add = add + i;
	}
	printf("The sum of 1 to %d is : %d\n", num, add);

}
