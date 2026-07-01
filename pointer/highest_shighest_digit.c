#include<stdio.h>
void highSecondhigh(int *, int *, int *);
int main()
{
	int num, high=0, shigh=0, t;
	printf("Enter the number: ");
	scanf("%d", &num);
	t=num;
	highSecondhigh(&t, &high, &shigh);
        printf("The highest and second highest digit of %d is: %d %d\n", num, high, shigh);
}

void highSecondhigh(int *n, int *h, int *sh)
{
	int rem;
	while(*n)
	{
		rem=*n%10;
		if(rem>*h)
		{
			*sh=*h;
			*h=rem;
		}
		else if(rem>*sh && rem!=*h)
		{
			*sh=rem;
		}
		*n=*n/10;
	}
}
