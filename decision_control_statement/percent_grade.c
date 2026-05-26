#include<stdio.h>

int main()
{
	float phy_marks, chem_marks, bio_marks, math_marks, computer_marks, total_sub_marks,   calc_perct;
	printf("Enter the physics, chemistry, Biology, mathmatics and computer marks: ");
	scanf("%f %f %f %f %f", &phy_marks, &chem_marks, &bio_marks, &math_marks, &computer_marks);

	printf("Marks obtained in physics: %f\nMarks obtained in chemistry: %f\nMarks obtained in biology: %f\nMarks obtained in Mathmatics: %f\nMarks obtained in Computer: %f\n", phy_marks, chem_marks, bio_marks, math_marks, computer_marks);

	total_sub_marks = phy_marks + chem_marks + bio_marks + math_marks + computer_marks;
	printf("Total marks of all subject is: %f\n", total_sub_marks); 

	calc_perct = (total_sub_marks/500)*100;
	printf("Percentage of you marks is: %f\n", calc_perct);

	if(calc_perct>=90)
	{
		printf("Grade A\n");
	}
	else if(calc_perct>=80)
	{
		printf("Grade B\n");
	}
	else if(calc_perct>=70)
	{
		printf("Grade C\n");
	}
	else if(calc_perct>=60)
	{
		printf("Grade D\n");
	}
	else if(calc_perct>=40)
	{
		printf("Grade E\n");
	}
	else
	{
		printf("Grade F\n");
	}
}                

