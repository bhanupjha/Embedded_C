#include<stdio.h>
#include<string.h>
int mystrncmpy(char *, char *, int);
int main()
{
	char str1[10]="abcdef";
	char str2[10]="abcdeg";
	int bytes;
	printf("PREVIOUS: str1: %s, str2: %s\n", str1, str2);
	printf("How many bytes u want to compare: ");
	scanf("%d", &bytes);
	int res=mystrncmpy(str1, str2, bytes);
	printf("Both string compared with no.of bytes to compared and value is: %d\n", res);
}

int  mystrncmpy(char *s1, char *s2, int byt)
{
	while(byt>0 &&*s1)
	{
		if(*s1!=*s2)
		{
			return *s1-*s2;
		}
			s1++;
			s2++;
			byt--;
	}
	if(byt==0){
		return 0;
	}
}

