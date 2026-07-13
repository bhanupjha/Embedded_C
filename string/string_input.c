//fgets(): -> fgets(str, sizeof(str), stdin);
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	//printf("Input string: %s", str); -> fgets() take enter as a new line character and created extra new line.
	char *p=str;
	while(*p)
	{
		if(*p=='\n')
		{
			*p='\0';
		}
		*p++;
	}
	printf("Updated string: %s", str);
}
