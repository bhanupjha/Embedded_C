// syntax -> int strlen(const char *str)
#include<stdio.h>
int mystrlen(char*);
int main()
{
	char s[50];
	int len;
	printf("Enter string:\n");
	scanf("%[^\n]s", s);
	printf("printing the string: %s\n", s);
	len=mystrlen(s);
	printf("Size of string length is: %d\n", len);
}

int mystrlen(char *s)
{
	int i=0;
	while(s[i])
	{
		i++;
	}
	return i;
}
