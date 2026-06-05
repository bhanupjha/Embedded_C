#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	for(int i=1; i<=n; i++)
	{
		//formatting 
		//+ve no. for right aligned
	//	printf("%3d\n",i);
		//-ve no. for left aligned
		printf("%-3d\n",i);
	}
}
