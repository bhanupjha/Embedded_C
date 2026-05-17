#include<stdio.h>

int main()
{
	int i;
	printf("Enter the value: ");
	scanf("%d", &i);
	printf("%d %d %d %d %d\n", i, i--,i, ++i, ++i); 
}
