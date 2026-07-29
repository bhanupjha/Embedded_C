// strncpy() -> predefine func
// syntax -> char* strncpy(char* dest, const char* src, no.of bytes);  
#include<stdio.h>
#include<string.h>
char* mystrncpy(char *, const char *, int);
int main()
{
	char Mstr[20]="Embeeded";
	char str[20];
	int  bytes;
	printf("PREVIOUS: str1: %s\n", Mstr);
	printf("How many bytes you want to copy from str: ");
	scanf("%d", &bytes);
	char *p=mystrncpy(str, Mstr, bytes);
	printf("AFTER: str1: %s, str2: %s\n", Mstr, str);
	printf("Returned address of strncpy: %s", p);
}

char*  mystrncpy(char *str, const char *mstr, int byt)
{
	int i;
	for(i=0; i<byt; i++)
	{
		str[i]=mstr[i];
	}
	return str;
}
