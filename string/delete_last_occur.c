// WAP delete the last occurence of given char in string
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void delete_last_occurence(char *str, char ch)
{
	char *p=str;
	if(p=strrchr(p, ch))
	{
		memmove(p, p+1, strlen(p+1)+1);
	}
}
int main()
{
	char str[50];
	char ch;
	printf("Enter the string: \n");
	scanf("%[^\n]s", str);
	printf("Enter the character: \n");
	__fpurge(stdin);
	scanf("%c", &ch);
	printf("Before deleting string is: %s\n", str);
	delete_last_occurence(str, ch);
	printf("After deleting last occurence %c, string is: %s\n", ch, str);
}
