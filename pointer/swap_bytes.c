#include<stdio.h>
int main()
{
	int x= 0x12345678, i, j;
	char *p=(char *)&x;
	char ch;
	printf("%x\n", x);
	for(i=0, j=3; i<j; i++, j--)
	{
		ch=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=ch;
	}
	printf("%x\n", x);
}
