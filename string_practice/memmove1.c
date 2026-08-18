// syntax -> void* memmove(void *dest, void *src, int n(no.of bytes));

#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="vector";
	char s2[10];
	memmove(s2, s1, (strlen(s1)+1));
	printf("%s", s2);
}
