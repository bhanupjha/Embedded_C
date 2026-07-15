// count the no.of words present in string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]= "hello! I,am'good";
	char deli[]="! ,'";
	char *p;
	int count=0;
	for(p=strtok(str, deli); p!=NULL; p=strtok(NULL, deli))
	{
		printf("%s\n", p);
		count++;
	}
	printf("No.of words in string: %d\n", count);
}
