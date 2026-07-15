// want to print original string without using temp variable
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]= "hii i  am   fine";
	char *p;
	int count=0;
	int len=strlen(str);
	printf("string: %s\n", str);
	printf("Length of string: %d\n", len);
	for(p=strtok(str, " "); p!=NULL; p=strtok(NULL, " "))
	{
		printf("%s\n", p);
		count++;
	}
	printf("No.of words in string: %d\n", count);
	//replace space-> one space only replaced 
	for(int i=0; i<len; i++)
	{
		if(str[i]=='\0')
		{
			str[i]=' ';
		}
	}
	printf("Original string: %s\n",str); 
	printf("Original length of string: %d\n", len);

}
