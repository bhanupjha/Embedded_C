// To limit the values to a smaller range, we use the modulus (%) operator
// When dividing by 100, the remainder can only be from 0 to 99.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	srand(getpid());
	printf("%d\n", rand()%100);
}
