#include<stdio.h>
int main()
{
	char c='A';
	int n=3456;
	float v=34.4;
	double d=67.89;

	char *p;
	int *q;
	float *k;
	double *r;

	p=&c;
	q=&n;
	k=&v;
	r=&d;

	printf("%p\n", p);
        printf("%p\n", q);
        printf("%p\n", k);
        printf("%p\n", r);

	printf("%c\n", *p);
        printf("%d\n", *q);
        printf("%f\n", *k);
        printf("%f\n", *r);
}
