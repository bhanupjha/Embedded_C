#include<stdio.h>
int main()
{
	float radius;
	printf("Enter the radius of circle: ");
	scanf("%f", &radius);
	printf("Area of circle: %f\n", 3.14*radius*radius);
	printf("Area of circumference: %f\n", 2*3.14*radius);
}	
