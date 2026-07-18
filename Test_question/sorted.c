//Input: 12345 -> sorted
//Input: 8521 -> sorted

#include<stdio.h>
int main()
{
	int n, t, g, rem, high=9, low=0;
	printf("Enter the value: ");
	scanf("%d", &n);
	t=n;
	while(t)
	{
		rem= t%10;
		if(rem<=high)
		{
			high=rem;
		}
		else
		{
			break;
		}
		t=t/10;
	}
	if(t==0)
	{
		printf("%d is Sorted", n);
	}
	g=n;
	while(g)
        {
                rem= g%10;
                if(rem>=low)
                {
                        low=rem;
                }
                else
                {
                        break;
                }
                g=g/10;
        }
        if(g==0)
        {
                printf("%d is Sorted", n);
        }
}
