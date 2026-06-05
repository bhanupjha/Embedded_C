#include<stdio.h>

int main()
{
	int age;
	char ch;

	printf("Enter the age: ");
	scanf("%d", &age);

	printf("Enter the character: ");
//	scanf("%c", &ch); //buffer problem
	scanf(" %c", &ch); // space before %c tells scanf to ignore white space character before reading the character.

	printf("character = %c\n", ch);
}
