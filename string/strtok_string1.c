// want to print original string without using temp variable
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]= "It is ok";
	char *p;
	int count=0;
	int len=strlen(str);
	for(p=strtok(str, " "); p!=NULL; p=strtok(NULL, " "))
	{
		printf("%s\n", p);
		count++;
	}
	printf("No.of words in string: %d\n", count);
	//replace space
	for(int i=0; i<len; i++)
	{
		if(str[i]=='\0')
		{
			str[i]=' ';
		}
	}
	printf("Original string: %s\n",str); 

}
