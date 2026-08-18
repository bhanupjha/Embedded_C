#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
char* hidechar(char*, char);
int main()
{
	char s1[20], ch, *q;
	printf("Enter the string:\n");
	scanf("%[^\n]s", s1);
	printf("Enter the char to be hidden:\n");
	__fpurge(stdin);
	scanf("%c", &ch);
	q=hidechar(s1, ch);
	if(q!=NULL)
	{
		printf("printing the updated string: %s\n", s1);
	}
	else
	{
		printf("Character not present in string\n");
	}
}

char* hidechar(char *s1, char ch)
{
	char *p;
	p=strchr(s1, ch);
	if(p)
	{
		*p='*';
	}
	else
	{
		return NULL;
	}
}
