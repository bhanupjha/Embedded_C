// WAP to delete the last occurence of given char in string
#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

void delete_char(char*, char);

int main()
{
	char str[50], ch;
	printf("Enter the string:\n");
	scanf("%[^\n]s", str);
	__fpurge(stdin);
	printf("Enter the char to be deleted:\n");
	scanf("%c", &ch);
	delete_char(str, ch);
	printf("print the updated string:%s\n", str);
}

void delete_char(char* str, char ch)
{
	char *p=strrchr(str, ch);
	memmove(p, p+1, (strlen(p+1)+1));
}
