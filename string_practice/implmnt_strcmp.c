//syntax -> int strcmp(const char *str1, const char *str2);

#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int mystrcmp(const char*, const char*);
int main()
{
	char str1[20];
	char str2[20];
	int value;
	printf("Enter str1:\n");
	scanf("%[^\n]s", str1);
        printf("Enter str2:\n");
	__fpurge(stdin);
        scanf("%[^\n]s", str2);	
	value=mystrcmp(str1, str2);
	printf("Different between both string: %d\n", value);
	if(value==0)
	{
		printf("Both string are same\n");
	}
	else if(value<0)
	{
		printf("str1 is less than str2\n");
	}
	else
	{
		printf("str1 is greater than str2\n");
	}
}

int mystrcmp(const char *str1, const char *str2)
{
	int i=0;
	while(str2[i])
	{
		if(str1[i]==str2[i])
		{
			i++;
		}
		else
		{
			return str1[i]-str2[i];
		}
	}
	return 0;
}
