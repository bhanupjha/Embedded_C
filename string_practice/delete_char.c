// WAP delete give character in string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20], ch;
	int len;
	printf("Enter the string:\n");
	fgets(str, sizeof(str), stdin);
	len=strlen(str);
	if((str[len-1])=='\n')
	{
		str[len-1]='\0';
	}
	printf("Enter the char to be deleted:\n");
	scanf("%c", &ch);
	char *p=str;
	if(p=strchr(p, ch))
	{
		memmove(p, p+1, (strlen(str)+1));
	}
	if(p!=NULL)
	{
		printf("printing the updated string:%s\n",str); 
	}
	else
	{
		printf("character is not present\n");
	}
}
