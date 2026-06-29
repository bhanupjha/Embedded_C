#include<stdio.h>
int main()
{
	int a[5]= {5, 15, 20, 69, 8};
	printf("size of a is: %ld\n", sizeof(a));
	for(int i=0; i<5; i++)
	{
		printf("%d, ", a[i]);
	}
}
