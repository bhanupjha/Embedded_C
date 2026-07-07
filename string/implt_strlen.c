//strlen -> predefine func
#include<stdio.h>
int mystrlen(char *);
int main()
{
	int count;
	char str[10]="hello";
	count=mystrlen(str);
	printf("length of string is: %d", count);
}

int mystrlen(char *p)
{
	int cnt=0;
	while(*p)
	{
		cnt++;
		p++;
	}
	return cnt;
}
