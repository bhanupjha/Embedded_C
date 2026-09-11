// printing value in range

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MIN 50
#define MAX 100
int main()
{
	int x;
	srand(getpid());
	x=rand()%(MAX-MIN+1)+MIN;
	printf("%d\n", x);
}
