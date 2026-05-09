#include<stdio.h>

int main()
{
	// if their Range Exceeded it will move around between the range
	printf("Signed_short_int\n");
	signed short int num;  // Range -> -32770 to 32767
	printf("Enter the number: ");
	scanf("%hd", &num);
	printf("Your Entered number is: %hd\n", num);

	printf("unsigned_short_int\n");
	unsigned short int num2; // Range ->. 0 to 65535
	printf("Enter the number: ");
        scanf("%hu", &num2);
        printf("Your Entered number is: %hu\n", num2);

	printf("unsigned_int\n");
        unsigned int num3; // Range ->. 0 to 65535
        printf("Enter the number: ");
        scanf("%u", &num3);
        printf("Your Entered number is: %u\n", num3);



		

}
