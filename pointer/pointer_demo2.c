#include<stdio.h>
int main()
{
	int num=10;
	int *p=&num;
	printf("%d %p %p", *p, p, &p);
}
