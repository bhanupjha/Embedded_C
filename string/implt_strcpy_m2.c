// strcpy() -> predefine func
// syntax : char* strcpy(char*, const char *); -> char* (dest, src)
#include<stdio.h>
#include<string.h>
char* mystrcpy(char *, const char *);
int main()
{
	char Mstr[10]="Bhanu";
	char str[10];
	printf("Previous: Mstr: %s\n", Mstr);
	char *p;
	p=mystrcpy(str,Mstr);
	printf("After: Mstr: %s, str: %s\n", Mstr, str);
	printf("returning address value of strcpy: %s\n", p);
}

char* mystrcpy(char *str, const char *Mstr)
{
	int len=strlen(Mstr), i=0;
	while(i<=len)
	{
		str[i]=Mstr[i];
		i++;
	}
	return str;
}
