// designing user defined get string function

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* getstring();
int main()
{
	char *str=NULL;
	printf("Enter the string:\n");
	str=getstring();
	printf("%s\n", str);
}

char* getstring()
{
	char *p=NULL;
	int i=0;
	do
	{
		p=realloc(p, i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]='\0';
	return p;
}
