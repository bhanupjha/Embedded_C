#include<stdio.h>

int main()
{
	// if given i/p above range it moves around in loop
	unsigned char ch; //unsigned char range -> 0 to 255
	printf("Enter the Number: ");
	scanf("%hhu", &ch);
	printf("Your Entered bnumber is: %d\n", ch);
}
