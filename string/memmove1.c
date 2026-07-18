#include<stdio.h>
#include<string.h>
// syntax memmove( dest Addr, src Addr, no.of bytes)
int main()
{
	char str[20]= "hell5o";
	// memmove
	memmove(str+4, str+5, 2);
	printf("string: %s\n", str);
}
