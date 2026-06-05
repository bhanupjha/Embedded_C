#include<stdio.h>
#include<stdio_ext.h>

int main()
{
	int age;
	char ch;

	printf("Enter the age: ");
	scanf("%d", &age);

	printf("Enter the character: ");
	__fpurge(stdin);
	scanf("%c", &ch); //buffer problem

	printf("character = %c\n", ch);
}
