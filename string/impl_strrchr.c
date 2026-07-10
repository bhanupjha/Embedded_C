#include<stdio.h>
#include<string.h>
char* mystrrchr(char *, char);
int main()
{
	char str[10]="hello_hlw";
	char *p, ch;
	printf("String: %s\n", str);
	printf("Which character u want to copy: ");
	scanf("%c", &ch);
	p=mystrrchr(str, ch);
	if(p!=NULL)
	{
		printf("After searched character: %s\n", p);
	}
	else
		printf("Character is not present in string\n");
}

char* mystrrchr(char *s, char ch)
{
	char *q= NULL;
	while(*s)
	{
		if(*s==ch)
		{
			q=s;	
		}
		s++;
	}
	return q;
}
