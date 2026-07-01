#include<stdio.h>
void square(int *);
int main()
{
	int num, t;
	printf("Enter the number: ");
	scanf("%d", &num);
	t=num;
	square(&t);
	printf("The squared of %d is : %d\n", num, t);
}

void square(int *n)
{
	*n=(*n)*(*n);
}
