#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter string: \n");
	fgets(str, sizeof(str), stdin);
	char *p = str;
	while(*p)
	{
		if(*p == '\n')
		{
			*p = '\0';
		}
		*p++;
	}
	printf("string is: %s\n", str);
	
	char *q;
	 q = strtok(str, " ");
	 while(q != NULL)
	 {
		 printf("%s\n", q);
		 q = strtok(NULL, " ");
	 }

}
