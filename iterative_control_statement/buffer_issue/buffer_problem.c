#include<stdio.h>

//buffer issue creates in char bcz char read \n(enter) as character but in int it as ignored(it is not a integer).
int main()
{
	int age;
	char ch;

	printf("Enter the age: ");
	scanf("%d", &age);

	printf("Enter the character: ");
	scanf("%c", &ch); //buffer problem
	//to remove buffer issue we have to use space before the %c , __fpurge(stdin), fflush(stdin).

	printf("character = %c\n", ch);
}
