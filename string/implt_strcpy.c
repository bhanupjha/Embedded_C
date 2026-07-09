#include<stdio.h>
#include<string.h>
void mystrcpy(char *, char *, int);
int main()
{
	char str1[]="hello";
	char str2[]="hii";
	int len=strlen(str2);
	mystrcpy(str1, str2, len);
	printf("str1: %s, str2: %s", str1, str2);
}

void mystrcpy( char *p, char *s, int l)
{
	for(int i=0; i<l; i++)
	{
		p[i]=s[i];
	}
	p[l]='\0';
}
