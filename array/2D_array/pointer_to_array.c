// pointer to an array or array pointer are capable to hold the addrs of 2D array
#include<stdio.h>
int main()
{
	int a[3][2] = {{10, 20}, {30, 40}, {50, 60}};
	// pointer to integer variable
	int *p = a; // warning
        //pointer to an integer array
	int (*q)[2] = a;
	printf("Both pointer hold the same base address\n");
	printf("pointer to integer variable hold addrss. of 1D array: %p\n", p);
	printf("pointer to integer array hold addrss. of 2D array: %p\n", q);
	p++; // incr 4 bytes -> 1D array
	q++; // incr 8 bytes -> 2D array
	printf("After incremented\n");
	printf("pointer to integer variable hold addrss. of 1D array: %p\n", p);
        printf("pointer to integer array hold addrss. of 2D array: %p\n", q);

}
