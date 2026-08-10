#include<stdio.h>
int main()
{
	char (*p)[20];
	int (*q)[10];
	double (*r)[10];
	char *c;
	int *x;

	printf("Size of pointer:\n");
	printf("Size of 2D Character pointer: %ld bytes\n", sizeof(p));
	printf("Size of 2D Integer Pointer: %ld bytes\n", sizeof(q));
	printf("Size of 2D double pointer: %ld bytes\n", sizeof(r));
	printf("Size of 1D character pointer: %ld bytes\n", sizeof(c));
	printf("Size of 1D integer pointer: %ld bytes\n", sizeof(x));
	printf("size of pointer Data type:\n");
	printf("Size of 2D Character data  type: %ld bytes\n", sizeof(*p));
        printf("Size of 2D Integer data type: %ld bytes\n", sizeof(*q));
        printf("Size of 2D double data type: %ld bytes\n", sizeof(*r));
        printf("Size of 1D character data type: %ld bytes\n", sizeof(*c));
        printf("Size of 1D integer data type: %ld bytes\n", sizeof(*x));
}
