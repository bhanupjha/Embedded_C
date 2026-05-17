#include<stdio.h>

int main()
{
	int x=0,y;
//	scanf("%d", &x);
	y = ++x + ++x + ++x + ++x;
	printf("%d %d", x, y); 
}
