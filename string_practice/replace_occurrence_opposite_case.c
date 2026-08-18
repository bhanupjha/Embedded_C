// WAP to replace all occurence of given char in opposite case
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int replacechar(char*, char);
int main()
{
	char s1[20], ch;
	int p;
	printf("Enter the string:\n");
	scanf("%[^\n]s", s1);
	printf("Enter the char to be hidden:\n");
	__fpurge(stdin);
	scanf("%c", &ch);
	p=replacechar(s1, ch);
	if(p!=0)
	{
		printf("printing the updated string: %s\n", s1);
	}
	else
	{
		printf("Character not present in string\n");
	}
}

int replacechar(char *s1, char ch)
{
	char *p=s1;
	int flag=0;
	while(p=strchr(p, ch))
	{
		if(p)
		{
			if(ch>=65 && ch<=90)
			{
				*p=ch+32;
			}
			else if(ch>=97 && ch<=122)
			{
				*p=ch-32;
			}
			p++;
			flag=1;
		}
	}
	return flag;
}
