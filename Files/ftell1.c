#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("xyz", "a");
	printf("%ld", ftell(fp));
}
