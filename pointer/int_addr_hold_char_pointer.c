#include<stdio.h>
int main()
{
	int x=356;
	char *p=&x;
	printf("%d", *p); //we expect -> 0 >> but got 100 bcz of byte ordering
}
