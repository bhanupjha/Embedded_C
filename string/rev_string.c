#include<stdio.h>
#include<string.h>
void mystrrev(char *, int);
int main()
{
	char str[20]="Bhanu_prakash";
	printf("previous string: %s\n", str);
	int len= strlen(str);
	mystrrev(str, len);
	printf("Updated string: %s\n", str);
}

void mystrrev(char *s, int l)
{
	char *start=s, *end=s+l-1;
	while(start<end)
	{
		char temp=*start;
		*start=*end;
		*end=temp; 
		start++;
		end--;
	}
}
