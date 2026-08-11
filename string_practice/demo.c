#include<stdio.h>
#include<string.h>
int main()
{
	// char array
//	char c[] = {'a', 'b', 'c', 'd'}; // // print garbage value -> abcdgarbage....
	char d[10]= {'a', 'b', 'c', 'd'};
	printf("character array d: %s\n", d); 
	printf("3th index value: %c\n", d[3]);
	printf("4th index value: %d\n", d[4]); // print the 5th index value -> compile time 
	printf("Size of character array d: %ld\n", sizeof(d));
}
