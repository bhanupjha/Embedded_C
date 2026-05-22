#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
        
	if((ch >= 65 && ch <= 90) | (ch >= 97 && ch <= 122))
	{
		printf("%c is character\n", ch);
	}
	else if(ch >= 48 && ch <= 57)
	{
		printf("%c is digit\n", ch);
	}	
	else
	{
		printf("%c is symbol\n", ch);
	}
}
