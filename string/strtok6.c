#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "hello I am Bhanu";
	char *p;
	p = strtok(str, " ");
	while(p != NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, " ");
	}
}
