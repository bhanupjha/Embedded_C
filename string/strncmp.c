#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="abca";
	char str2[]="abcd";
	printf("str1: %s, str2: %s\n", str1, str2);
	int res=strncmp(str1, str2, 3);
	printf("Both string compared with how much byte to compare and value is: %d\n", res);
}
