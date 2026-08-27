#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]= "hello";
	char ch='l';
	char *p = strrchr(str,ch);
	printf("from last occurence:%s\n", p);
}
