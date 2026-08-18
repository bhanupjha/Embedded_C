// syntax -> void* memmove(void *dest, void *src, int n(no.of bytes));

#include<stdio.h>
#include<string.h>
int main()
{
	int  a[5] = {10, 20, 30, 40, 50};
	int b[5];
	// in place of sizeof we cant use strlen bcz it demand string & \0 NULL character must
	memmove(b, a, sizeof(a));
	for(int i=0; i<5; i++)
	{
		printf("%d ", b[i]);
	}
}
