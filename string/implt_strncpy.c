#include<stdio.h>
#include<string.h>
char* mystrncpy(char *, char *, int);
int main()
{
	char str1[20]="Embeeded";
	char str[20]="System";
	int  bytes;
	printf("PREVIOUS: str1: %s, str2: %s\n", str1, str);
	printf("How many bytes you want to copy from str: ");
	scanf("%d", &bytes);
	char *p=mystrncpy(str1, str, bytes);
	printf("AFTER: str1: %s, str2: %s\n", str1, str);
	printf("Returned address value to NULL: %s", p);
}

char*  mystrncpy(char *s1, char *s2, int byt)
{
	int i;
	for(i=0; i<byt; i++)
	{
		s1[i]=s2[i];
	}
	return s1;
}
