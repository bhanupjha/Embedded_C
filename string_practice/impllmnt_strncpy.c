// syntax -> char* strncpy(char* dest, const char* src, int t)
#include<stdio.h>
#include<string.h>
char* mystrncpy(char*, const char*, int);
int main()
{
	char s1[50], s2[50], *p;
	int bytes;
	printf("Enter s1 string:\n");
	scanf("%[^\n]s", s1);
	printf("Enter the bytes:\n");
	scanf("%d", &bytes);
	p=mystrncpy(s2, s1, bytes);
	printf("printing copying string in s2:%s\n",p);
}

char* mystrncpy(char *s2, const char *s1, int bytes)
{
	int i=0;
	while(i<bytes)
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	return s2;
}
