#include<stdio.h>
int main()
{
	int num=356;
	int *p=&num;
	printf("Intial value of num is: %d\n", *p);
	*p=45;
	printf("After changing the value of num is: %d\n", *p);
}
