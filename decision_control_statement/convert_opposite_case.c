#include<stdio.h>

int main()
{
	char ch,x;
	printf("Enter the char: ");
	scanf("%c", &ch);
	if(ch >= 65 && ch <= 90)
	{
	       x = ch + 32;
       	       printf("The lower case value of %c is: %c\n", ch, x);	       
		
	}
	else if(ch >= 97 && ch <= 122)
	{
	       x = ch - 32;
               printf("The upper case value of %c is: %c\n", ch, x);
	}
	else
	{
	       printf("Your entered character is: %c\n", ch);
	}
              	
}
