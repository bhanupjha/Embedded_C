#include<stdio.h>
int main()
{
	int a[3][2] = {{10, 20}, {30, 40}, {50, 60}};
	int *p = a;
	int (*q)[2] = a;
	printf("Base addrs of p: %p\n", p);
	printf("Base addrs of q: %p\n", q);
	// p[0] index 
	printf("Value at p[0]: %d\n", p[0]); // it gives value at p[0]
	// q[0] index
        printf("Value at q[0]: %p\n", q[0]);// it gives address of q[0]
	printf("Value at *q[0]: %d\n", *q[0]); // double derefrencing gives the value
	printf("Value at **q: %d\n", **q); // double derefrencing gives the value
}
