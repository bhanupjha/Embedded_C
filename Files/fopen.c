#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("data", "r");
	if(fp==NULL)
	{
		printf("Data file not found");
	}
	else
	{
		printf("file opened successfully");
	}
}
