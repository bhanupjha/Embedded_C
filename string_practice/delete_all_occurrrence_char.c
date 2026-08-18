// WAP delete all occurrence of given character in string
#include<stdio.h>
#include<string.h>
int deleteAllChar(char*, char);
int main()
{
	char str[20], ch;
	int len, p;
	printf("Enter the string:\n");
	fgets(str, sizeof(str), stdin);
	len=strlen(str);
	if((str[len-1])=='\n')
	{
		str[len-1]='\0';
	}
	printf("Enter the char to be deleted:\n");
	scanf("%c", &ch);
	p=deleteAllChar(str, ch);
	if(p!=0)
	{
		printf("printing the updated string:%s\n",str); 
	}
	else
	{
		printf("character is not present\n");
	}
}

int deleteAllChar(char* str, char ch)
{
	char *p=str;
	int flag=0;
	while(p=strchr(p, ch))
	{
		if(p)
		{
			memmove(p, p+1, (strlen(p)+1));
			p--;
			flag =1;
		}
		p++;
	}
	return flag;	
}
