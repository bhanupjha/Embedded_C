#include<stdio.h>
int cntbit(int);
int main()
{
	int num, set_bit;
	printf("Enter the number: ");
	scanf("%d", &num);
	set_bit=cntbit(num);
	printf("The no.of set bit in %d is: %d\n", num, set_bit);
}

int cntbit(int n)
{
	int i, cnt=0;
	for(i=31; i>=0; i--)
	{
		if(n&(1<<i))
		{
			cnt++;
		}
	}
	return cnt;
}
