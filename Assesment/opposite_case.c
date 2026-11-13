// WAP to convert alphabetically letter into opposite case
#include <stdio.h>

int main()
{
	char ch;
	printf("Enter the character: \n");
	scanf("%c", &ch);
	printf("Character: %c\n", ch);
	ch = ch^32;
	printf("Opposite case: %c\n", ch);
}
