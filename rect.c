#include<stdio.h>
int main()
{
	float length, breadth, area;
        printf("Enter the Length:");
	scanf("%f", &length);
        printf("Enter the breadth: ");
	scanf("%f", &breadth);
	printf("Area of rectangle:%f\n", length*breadth);
        printf("Perimeter of rectangle:%f\n", 2*(length+breadth));	
}	

