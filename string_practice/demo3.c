#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("Enter string:\n");
	// in scanf enter -> \n is treated as character as scanf see \n it terminates the string
	scanf("%s", s);
	printf("Printing string: %s\n", s);
	printf("size of string: %ld\n", sizeof(s));
	printf("string length of: %ld\n", strlen(s));
}
