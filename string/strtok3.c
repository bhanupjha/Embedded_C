//count the no.of words present in string
//we can direcly use deli var in strtok argument
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]= "It is ok";
        //char deli[]=" ";
	char *p;
	int count=0;
	for(p=strtok(str, " "); p!=NULL; p=strtok(NULL, " "))
	{
		printf("%s\n", p);
		count++;
	}
	printf("No.of words in string: %d\n", count);
}
