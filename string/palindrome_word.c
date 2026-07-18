//count no.of palindrome words in given string
#include<stdio.h>
#include<string.h>
char* check_palindrome(char *);
int main()
{
	char str[]="madam teaches radar subject";
	char deli[]=" ";
	char *p, *q;
	int count=0;
	for(p=strtok(str, deli); p!=NULL; p=strtok(NULL, deli))
	{
		q=check_palindrome(p);
		if(strcmp(p,q)==0)
		{
			printf("palindrome word: %s\n", q);
			count++;
		}
	}
	printf("No.of palindrome words in string: %d\n", count);
}

char* check_palindrome(char *p)
{
	static char str[50];
	strcpy(str, p);
	char ch;
	char *start, *end, t;
	start=str;
	end=str+strlen(str)-1;
	while(start<end)
	{
		ch= *start;
		*start=*end;
		*end=ch;		
		start++;
		end--;
	}
	return str;
}
