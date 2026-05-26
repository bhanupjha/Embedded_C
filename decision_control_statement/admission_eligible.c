#include<stdio.h>

int main()
{
	float math_marks, phy_marks, chem_marks, total_sub_marks, total_mark_phy_math;
	printf("Enter the math, physics and chemistry marks: ");
	scanf("%f %f %f", &math_marks, &phy_marks, &chem_marks);
	printf("Marks obtained in math: %f\nMarks obtained in physics: %f\nMarks obtained in chemistry: %f\n", math_marks, phy_marks, chem_marks);

	total_sub_marks = phy_marks + math_marks + chem_marks;
	printf("Total marks in phy, chem and math is: %f\n", total_sub_marks); 

	total_mark_phy_math = phy_marks + math_marks;
	printf("Total marks in phy and math is: %f\n", total_mark_phy_math);

	if(total_sub_marks >= 190 && total_mark_phy_math >= 140)
	{
		printf("The candidate is eligible for admission\n");
	}
	else
	{
		printf("The candidate is not eligible for admission\n");
	}
}
