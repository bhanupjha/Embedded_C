//syntax -> char* strchr(const char *str, int ch);

#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
	char str[20];
	char ch, *p;
	printf("Enter str:\n");
	scanf("%[^\n]s", str);
	printf("Enter character to search in string:\n");
	__fpurge(stdin);
        scanf("%c", &ch);
	p=strchr(str, ch);
	if(p!=NULL)
	{
		printf("Character is present\n");
	}
	else
	{
		printf("character is not present\n");
	}
}
