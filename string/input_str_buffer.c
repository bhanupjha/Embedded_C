// taking string input using fgets through function but due to pointer size it goes in buffer.
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void inp_str(char *);
int main()
{
	char mainstr[50];
	char substr[50];
	printf("Enter Main-string: ");
	inp_str(mainstr);
	printf("Your Main-string: %s\n", mainstr);
	//__fpurge(stdin); due to above pointer size its goes in buffer
	printf("Enter Sub-string: ");
	inp_str(substr);
	printf("Your sub-string: %s\n", substr);
}

void inp_str(char *p)
{
	fgets(p, sizeof(p), stdin); // here p is taking the pointer size -> 8 byte thats why after 8 char it is not taking input
	while(*p)
        {
                if(*p=='\n')
                {
                        *p='\0';
                }
                *p++;
        }
}
