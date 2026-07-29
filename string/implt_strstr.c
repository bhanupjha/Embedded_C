#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
char * mystrstr(char *s, char *s1)
{
	char *p, *q;
        while(*s)
	{
		p=s;
		q=s1;
		while(*p==*q && *q)
		{
			p++;
			q++;
		}
		if(*q=='\0')
		{
			return s;
		}
		s++;	
	}	
	return NULL;

}

int main()
{
	char s[100], s1[20];
	printf("Enter the main string: ");
	scanf("%[^\n]s", s);
	printf("Enter the substring: ");
	__fpurge(stdin);
	scanf("%[^\n]s", s1);
	char *p;
	p=mystrstr(s,s1);
	printf("%s", p);
}
