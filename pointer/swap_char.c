#include<stdio.h>
void swap_char(char *);
int main()
{
	char ch, t;
	printf("Enter the character: ");
	scanf("%c", &ch);
	t=ch;
	swap_char(&t);
	printf("Your entered char %c swapped to %c\n", ch, t);
}

void swap_char(char *c)
{
	if(((*c)>=65 && (*c)<=90) || ((*c)>=97 && (*c)<=122))
	{
		*c=(*c)^32;
	}
	else
	{
		printf("Invalid character\n");
	}
}
