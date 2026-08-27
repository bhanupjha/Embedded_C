// WAP to delete the duplicate element in char
#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

void delete_duplicate(char*, char);

int main()
{
	char str[50], ch;
	printf("Enter the string:\n");
	scanf("%[^\n]s", str);
	__fpurge(stdin);
	printf("Enter the char:\n");
	scanf("%c", &ch);
	delete_duplicate(str, ch);
	printf("Updated string:%s\n", str); 
}

void delete_duplicate(char* str, char ch)
{
	char *p;
	while(p=strchr(str,ch))
	{
		int flag=0;
		for(int i=0; i<strlen(p); i++)
		{
			for(int j=1; j<strlen(p); j++)
			{
				if(p[i]==p[j])
				{
					flag++;
				}		
			}
			if(flag>1)
			{
				memmove(p, p+1, strlen(p+1)+1);
				p++;
			}

		}
		p++;
	}
}
