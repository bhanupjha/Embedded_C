#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]= "vector";
	char s2[10];
//	s2=s1; // invalid 
	strcpy(s2, s1);
        printf("%s\n", s2);	
}
