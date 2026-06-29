#include<stdio.h>
int main()
{
	int num;
	char ch;
	int *p;
	char *q;

	p=&num;
	q=&ch;

	printf("%p\n", p);
	printf("%p\n", q);
	printf("%d\n", *p);
	printf("%d\n", *q);
	p++;
	q++;
	printf("%p\n", p);
	printf("%p\n", q);
	printf("%d\n", *p);
	printf("%c\n", *q);

}
