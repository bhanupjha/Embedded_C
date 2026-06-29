#include<stdio.h>
int main()
{
	int x=1;
	char *p=&x;
	if(*p)
	{
		printf("Litte Endian");
	}
	else
	{
		printf("Big Endian");
	}
}
