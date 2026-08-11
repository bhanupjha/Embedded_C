// memmove() 
#include<stdio.h>
#include<string.h>
char* mymemmove(char *dest, char* src, int len)
{
	if(dest<src)
	{
		for(int i=0; i<len; i++)
		{
			dest[i]=src[i];
		}
	}
	else
	{
		for(int i=len; i>0; i--)
		{
			dest[i-1]=src[i-1];
		}
	}
	return dest;
	
}
int main()
{
	char str[28]="abcdefghijk";
	char sstr[20]="def";
	char *p=str;
	int len=strlen(sstr);
	char *q=strstr(p, sstr);
	char *k=mymemmove(q, q+len, sizeof(strlen(q+len)));
	printf("%s", str);
}
