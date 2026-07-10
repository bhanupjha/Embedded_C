#include<stdio.h>
#include<string.h>
char* mystrchr(char *, char);
int main()
{
	char str[10]="hello";
	char *p, ch;
	printf("String: %s\n", str);
	printf("Which character u want to copy: ");
	scanf("%c", &ch);
	p=mystrchr(str, ch);
	if(p!=NULL)
	{
		printf("After searched character: %s\n", p);
	}
	else
		printf("Character is not present in string\n");
}

char* mystrchr(char *s, char ch)
{
	while(*s)
	{
		if(*s==ch)
		{
			return s;
		}
		*s++;
	}
	return NULL;
}
