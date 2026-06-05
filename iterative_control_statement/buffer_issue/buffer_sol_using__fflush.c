#include<stdio.h>
#include<stdlib.h>

int main()
{
	int age;
	char ch;

	printf("Enter the age: ");
	scanf("%d", &age);


	printf("Enter the character: ");
	//fflush(stdin);
	scanf("%c", &ch); //buffer problem
	fflush(stdin);
	printf("character = %c\n", ch);
}
