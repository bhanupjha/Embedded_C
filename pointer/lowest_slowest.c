#include<stdio.h>
void lowestSlowest(int *, int *, int *);
int main()
{
	int num, lowest=9, slowest=9, t;
	printf("Enter the number: ");
	scanf("%d", &num);
	t=num;
	lowestSlowest(&t, &lowest, &slowest);
        printf("The lowest and second lowest digit of %d is: %d %d\n", num, lowest, slowest);
}

void lowestSlowest(int *n, int *l, int *sl)
{
	int rem;
	while(*n)
	{
		rem=*n%10;
		if(rem<*l)
		{
			*sl=*l;
			*l=rem;
		}
		else if(rem<*sl && rem!=*l)
		{
			*sl=rem;
		}
		*n=*n/10;
	}
}
