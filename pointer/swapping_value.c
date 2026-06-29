#include<stdio.h>
void swap(int *, int *);
int main()
{
	int n1=10, n2=20;
	printf("n1: %d n2: %d\n", n1, n2);
	swap(&n1, &n2);
	printf("n1: %d n2: %d\n", n1, n2);
}

void swap(int *a, int *b)
{
	int c;
	c=*a;
        *a=*b;
	*b=c;
}
