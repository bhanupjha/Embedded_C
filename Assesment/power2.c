// WAP find the number is power of 2 or not
// n = n&n-1  -> 0 power of 2 otherwise not

#include <stdio.h>

int main()
{
	int num;
        printf("Enter the number: \n");
        scanf("%d", &num);
        printf("Number: %d\n", num);
        (num &(num - 1))?printf("Not power of 2\n"):printf("Number is power of 2\n");
}
