// reverse all occurrence of substring in FILE

#include<stdio.h>
#include<string.h>


void strrev(char*, int);
int main()
{
	FILE *fp, *temp; int l;
	char str[100], sub[100];
	fp = fopen("data", "w");
	temp = fopen("temp", "r");
	if((fp==NULL)||(temp==NULL))
		return 0;
	printf("Enter the sub string:\n");
	scanf(" %[^\n]s", sub);
	l=strlen(sub);
	while(fgets(str, sizeof(str), fp))
	{
		strrev(str,l);
		fputs(str, temp);
	}
	fclose(fp);
	fclose(temp);
	remove("data");
	rename("temp", "xyz");

}


void strrev(char *p, int l)
{
	int i=0, j;
	char ch;
	j = l-1; 
	while(i<j)
	{
		ch=p[i];
		p[i]=p[j];
		p[j]=ch;
		i++;
		j--;
	}
}
