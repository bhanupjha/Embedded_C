#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="system";
	char str2[20]="embeeded";
	printf("PREVIOUS: str1: %s, str2: %s\n", str1, str2);
	strncpy(str1, str2, 7);
	printf("AFTER: str1: %s, str2: %s\n", str1, str2);
}
