#include<stdio.h>
#include<string.h>
int main()
{
	char str[10]="Hello";
	char *p;
	p=strrchr(str, 'l');
	printf("String is: %s\n", str);
	printf("After seaching character: %s\n", p);
}
