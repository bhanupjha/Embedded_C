// syntax -> char* strcpy(char*, const char*)
#include<stdio.h>
#include<string.h>
char* mystrcpy(char*, const char*);
int main()
{
	char s1[50], s2[50], *p;
	printf("Enter s1 string:\n");
	scanf("%[^\n]s", s1);
	p=mystrcpy(s2, s1);
	printf("printing copying string in s2:%s\n",p);
}

char* mystrcpy(char *s2, const char *s1)
{
	int i=0;
	int l=strlen(s1);
	while(i<=l)
	{
		s2[i]=s1[i];
		i++;
	}
	return s2;
}
