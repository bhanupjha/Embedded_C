
#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("data", "a");
	printf("%ld", ftell(fp));
}
