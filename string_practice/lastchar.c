#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter the string:\n");
	scanf("%[^\n]s", str);
	printf("string is: %s\n", str);
	printf("Str length: %ld\n", strlen(str));
	// '\0' -> NULL blank nothing will show
	printf("last character of string NULL: %c\n", str[strlen(str)]);
	printf("last character of string before NULL: %c\n", str[(strlen(str)-1)]);
}
