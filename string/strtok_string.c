// want to print original string using temp variable
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]= "It is ok";
	char temp[20];
	strcpy(temp, str);
	char *p;
	int count=0;
	for(p=strtok(str, " "); p!=NULL; p=strtok(NULL, " "))
	{
		printf("%s\n", p);
		count++;
	}
	printf("No.of words in string: %d\n", count);
	printf("Original string is: %s\n", temp);
}
