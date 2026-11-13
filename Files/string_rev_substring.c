// reverse all occurrence of substring in FILE

#include<stdio.h>
#include<string.h>

void reversestr(char *, char*);
void strrev(char*, int);
int main()
{
	char filename[20], substr[100];
	printf("Enter the file name:\n");
	scanf("%[^\n]s", filename);
	printf("Enter the sub string\n");
	scanf(" %[^\n]s", substr);
	reversestr(filename, substr);
}

void reversestr(char *filename, char *sub)
{
	char str[100]; int l;
	FILE *fp;
	fp = fopen(filename, "r+");
	if(fp==NULL)
	{
		printf("File not found\n");
		return;
	}
	l = strlen(sub);
	while(1)
	{
		long pos = ftell(fp);

		if(fgets(str, 100, fp)==NULL)
			break;

		char *p= strstr(str, sub);
		while(p!=NULL)
		{
			strrev(p, l);
			p=strstr(p+l, sub);
		}
		
		fseek(fp, pos, SEEK_SET);
		fputs(str, fp);
		fseek(fp, pos+strlen(str), SEEK_SET);
	}
	fclose(fp);  // close the file
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
