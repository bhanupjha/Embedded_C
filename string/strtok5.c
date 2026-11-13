#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "hello hii hlw";
	char *p;
	p = strtok(str, " ");
	printf("%s\n", p);
	p = strtok(NULL, " ");
	printf("%s\n", p);
	p = strtok(NULL, " ");
        printf("%s\n", p);
}
