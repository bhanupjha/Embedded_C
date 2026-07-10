#include<stdio.h>
#include<string.h>
char* mystrrev(char *, int);
int main()
{
	char str[20]="radar";
	printf("Before reverse string: %s\n", str);
	int len= strlen(str);
	char *p=mystrrev(str, len);
	printf("After reverse string: %s\n", p);
	if(strcmp(p, str)==0)
	{
		printf("String is palindrome\n");
	}
	else
		printf("Not Palindrome\n");

}

char* mystrrev(char *s, int l)
{
	static char string[20];
	strcpy(string,s);
	char *start=string, *end=string+l-1;
	while(start<end)
	{
		char temp=*start;
		*start=*end;
		*end=temp; 
		start++;
		end--;
	}
	return string;
}
