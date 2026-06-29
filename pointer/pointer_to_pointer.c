#include<stdio.h>
int main()
{
	int x=10;
	int *p=&x;
	int **q=&p;

	printf("%p\n", p);
	printf("%p\n", q);

	printf("%d\n", *p);// *p-> *(&x) -> *(1000) -> 10
	printf("%d\n", **q); // **q -> **(&p) -> **(2000) -> *(1000) -> 10
}
