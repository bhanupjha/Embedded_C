// This is not the way to compare string it is always comparing their address not string
// it is always give unequal.
#include<stdio.h>
int main()
{
	char s1[20]= "abcd";
	char s2[20]= "abcd";
	
	if(s1==s2)
	{
		printf("Equal");
	}
	else
	{
		printf("Not equal");
	}
}
