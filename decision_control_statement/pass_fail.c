#include<stdio.h>

int main()
{
	int marks;
	printf("Enter the marks: ");
	scanf("%d", &marks);
	if(marks >= 40)
	{
       	       printf("The student is pass in their exam and their marks is: %d\n", marks);	       
		
	}
	else
	{
		printf("The student fail in their exam and their marks is: %d\n", marks);
	}
	
}
