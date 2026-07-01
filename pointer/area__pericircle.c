#include<stdio.h>
void area_peri(float *, float *, float *);
int main()
{
	float radius, area=0, peri=0;
	printf("Enter the radius of circle: ");
	scanf("%f", &radius);
	area_peri(&radius, &area, &peri);
	printf("The area of circle is: %.2f\n", area);
	printf("The perimeter of circle is: %.2f\n", peri);
}

void area_peri(float *r, float *a, float *p)
{
	*a=3.14*(*r)*(*r);
	*p=2*3.14*(*r);
}
