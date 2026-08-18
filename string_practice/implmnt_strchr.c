//syntax -> char* strchr(const char *str1, char ch);

#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
char* mystrchr(const char*, char);
int main()
{
	char str[20];
	char ch, *p;
	printf("Enter str:\n");
	scanf("%[^\n]s", str);
        printf("Enter which char to search:\n");
	__fpurge(stdin);
        scanf("%c", &ch);	
	p=mystrchr(str, ch);
	printf("string from that address:%s\n", p);
	if(p!=NULL)
	{
		printf("character is present\n");
	}
	else
	{
		printf("character is not present\n");
	}
}

char* mystrchr(const char *str, char ch)
{
	int i=0;
	while(str[i])
	{
		if(str[i]==ch)
		{
			return (char*)(str+i);
		}
		i++;
	}
	return NULL;
}
