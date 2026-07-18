#include<stdio.h>
#include<string.h>
// syntax memmove( dest Addr, src Addr, no.of bytes)
int main()
{
	char str[7];
	fgets(str, sizeof(str), stdin);
	char *p=str, *q;
	while(*p)
	{
		if(*p=='\n')
		{
			*p='\0';
		}
		p++;
	}
	
	q=strchr(str, '5');
	// memmove
	memmove(q, q+1, strlen(q+1)+1);
	printf("string: %s\n", str);
}
