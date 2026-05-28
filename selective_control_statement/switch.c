#include<stdio.h>

int main()
{
	int choice;
	printf("Enter the choice: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1: printf("This is case 1\n");
 		case 2: printf("This is case 2\n");
	  	case 3: printf("This is case 3\n");
		case 4: printf("This is case 4\n");
		case 5: printf("This is case 5\n");
		default: printf("default\n");
	}	
}
