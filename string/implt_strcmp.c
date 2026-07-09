#include<stdio.h>
#include<string.h>
int mystrcmpy(char *, char *);
int main()
{
	char str1[5]="abd";
	char str2[5]="abc";
	printf("PREVIOUS: str1: %s, str2: %s\n", str1, str2);
	int res=mystrcmpy(str1, str2);
	printf("Both string compared and value is: %d\n", res);
}

int  mystrcmpy(char *s1, char *s2)
{
	while(*s1==*s2 && *s1)
	{
		s1++;
		s2++;
	}
	return *s1-*s2;
}
