#include<stdio.h>
int main()
{
	int *p;
	char *q;
	double *d;

	  printf("%ld %ld\n", sizeof(p), sizeof(*p)); // 4 8 
          printf("%ld %ld\n", sizeof(q), sizeof(*q)); // 1 8
          printf("%ld %ld\n", sizeof(d), sizeof(*d)); // 8 8

}
