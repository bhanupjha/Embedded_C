// syntax -> char* strncpy(char* dest, const char* src, int t)
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50], s2[50], *p;
	printf("Enter s1 string:\n");
	scanf("%[^\n]s", s1);
	p = strncpy(s2, s1, 3);
	printf("printing copying string in s2:%s\n",p);
}
