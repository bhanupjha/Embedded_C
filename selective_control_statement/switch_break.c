#include<stdio.h>

int main()
{
	int choice;
	printf("Enter the choice: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1: printf("This is case 1\n");
			break;
 		case 2: printf("This is case 2\n");
			break;
	  	case 3: printf("This is case 3\n");
			break;
		case 4: printf("This is case 4\n");
			break;
		case 5: printf("This is case 5\n");
			break;
		default: printf("default\n");
	}	
}
