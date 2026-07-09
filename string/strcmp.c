#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="dac";
	char str2[]="abc";
	printf("str1: %s, str2: %s\n", str1, str2);
	int res=strcmp(str1, str2);// if both strg same -> 0, diff -> -ve, +ve [comp str1 > str2]
	printf("Both string compared and value is: %d\n", res);
}
