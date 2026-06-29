#include<stdio.h>

int main()
{
	int num=356;
	char ch='S';
	int *p;
	char *q;
	p=&num;
	q=&ch;
	printf("%p\n", p);
	printf("%p\n",q);

	printf("%d\n", *p);
	printf("%c\n", *q);
}
