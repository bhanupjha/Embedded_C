#include<stdio.h>
void area_peri(int *, int *, int *, int *);
int main()
{
	int length, breadth, area=0, peri=0;
	printf("Enter the legth and breadth of rectangle: ");
	scanf("%d %d", &length, &breadth);
	area_peri(&length, &breadth, &area, &peri);
	printf("The area of rectangle is: %d\n", area);
	printf("The perimeter of rectangle is: %d\n", peri);
}

void area_peri(int *l, int *b, int *a, int *p)
{
	*a=(*l)*(*b);
	*p=2*((*l)+(*b));
}
