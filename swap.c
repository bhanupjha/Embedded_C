#include<stdio.h>
int main()
{
	int first_num, second_num, temp;
	printf("Enter the first Number: ");
	scanf("%d", &first_num);
	printf("Enter the second number: ");
	scanf("%d", &second_num);
	temp = first_num;
	first_num = second_num;
	second_num = temp;
	printf("After Swapping\n");
	printf("First Number is: %d\n", first_num);
	printf("Second Number is: %d\n", second_num);

}	
