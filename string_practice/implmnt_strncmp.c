//syntax -> int strncmp(const char *str1, const char *str2, int bytes);

#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int mystrncmp(const char*, const char*, int bytes);
int main()
{
	char str1[20];
	char str2[20];
	int value, bytes;
	printf("Enter str1:\n");
	scanf("%[^\n]s", str1);
        printf("Enter str2:\n");
	__fpurge(stdin);
        scanf("%[^\n]s", str2);	
	printf("Enter bytes:\n");
        scanf("%d", &bytes);
	value=mystrncmp(str1, str2, bytes);
	printf("Different between both string on basis of bytes: %d\n", value);
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

int mystrncmp(const char *str1, const char *str2, int bytes)
{
	int i=0;
	while(i<bytes)
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
