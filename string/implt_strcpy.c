#include<stdio.h>
#include<string.h>
void mystrcpy(char *, char *);
int main()
{
	char str1[10]="Bhanu";
	char str2[10]="prakash";
	printf("Previous: str1: %s, str2: %s\n", str1, str2);
	mystrcpy(str1, str2);
	printf("After: str1: %s, str2: %s\n", str1, str2);
}

void mystrcpy( char *s1, char *s2)
{
	while(*s2)
	{
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
}
