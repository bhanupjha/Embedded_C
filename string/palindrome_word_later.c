//count no.of palindrome words in given string
#include<stdio.h>
#include<string.h>
int check_palindrome(char *);
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
}

int check_palindrome(char *str)
{
	static char temp[50];
	strcpy(temp, str);
	char *start, *end, t;
	end=str+strlen(str)-1;
	while(start<end)
	{
		strcpy(t, str);	
	}
	return temp;
}
