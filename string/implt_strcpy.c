#include<stdio.h>
#include<string.h>
char* mystrcpy(char *, char *);
int main()
{
	char str1[10]="Bhanu";
	char str2[10];
	printf("Previous: str1: %s\n", str1);
	char *p;
	p=mystrcpy(str2, str1);
	printf("After: str1: %s, str2: %s\n", str1, str2);
	printf("Returning address value: %s\n", p);
}

char* mystrcpy( char *s1, char *s)
{
	char *p=s1;
	while(*s)
	{
		*s1=*s;
		s++;
		s1++;
	}
	*s1='\0';
	return p;
}
