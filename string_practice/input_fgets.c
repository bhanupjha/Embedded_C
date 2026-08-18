#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	int len;
	printf("Enter the string:\n");
	fgets(str, sizeof(str), stdin);
	len=strlen(str);
	if(str[len-1]=='\n')
	{
		str[len-1]='\0';
	}
	printf("string is:%s\n", str);
}
