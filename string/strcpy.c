#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Hello_hii";
	char str2[]="Bhanu";
	printf("str1: %s, str2: %s\n", str1, str2);
	strcpy(str1, str2);// strcpy copying with '\0' NULL character, when printf see Null character it stop printing.
	printf("str1: %s, str2: %s\n", str1, str2);
}
