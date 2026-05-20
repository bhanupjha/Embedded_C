#include<stdio.h>

int main()
{
	short int n, x;
	printf("Enter the value: ");
	scanf("%hd", &n);
	printf("Enter the bit position: ");
        scanf("%hd", &x);
	printf("After left shifted value will be: %hd\n", n<<x);
	printf("The value of n is: %hd\n", n);
}
