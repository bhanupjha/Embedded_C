// Creating a Name database

#define ROW 5
#define COL 20

#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>

void Insert(char (*)[COL]);
void Print(char (*)[COL]);
void Delete(char (*)[COL]);
void Sort(char (*)[COL]);
int cnt;
int main()
{
	char DB[ROW][COL];
	char choice;
	while(1)
	{
		printf("What u want to perform?\n");
		printf("Press: i. Insert, p. Print, d. Delete, s. Sort, e. exit\n");
		printf("Enter your choice:\n");
		__fpurge(stdin);
		scanf("%c", &choice);
		switch(choice)
		{
			case 'i': Insert(DB);
				  break;
			case 'p': Print(DB);
				  break;
			case 'd': Delete(DB);
				  break;
			case 's': Sort(DB);
				  break;
			case 'e': exit(0); 
		}
	}
}

void Insert(char (*p)[COL])
{
	if(cnt==ROW)
	{
		printf("DB is FULL\n");
		return;
	}
	else
	{
		printf("Enter the name to be inserted:\n");
		__fpurge(stdin);
		scanf("%[^\n]s", p[cnt]);
		cnt++;
	}
}

void Print(char (*p)[COL])
{
        if(cnt==0)
        {
                printf("DB is Empty\n");
                return;
        }
        else
        {
                for(int i=0; i<cnt; i++)
		{
			printf("%s\n", p[i]);
		}
        }
}

// Based on given string
void Delete(char (*p)[COL])
{
	char str[COL];
	printf("Enter the string to be deleted:\n");
	__fpurge(stdin);
	scanf("%[^\n]s", str);
	for(int i=0; i<cnt; i++)
	{
		if (strcmp(str, p[i])==0)
		{
			memmove((p+i), (p+i+1), (cnt-i-1)*COL);
			cnt--;
			return;
		}
	}
	printf("%s is not found", str);
}

void Sort(char (*p)[COL])
{
	char temp[COL];
	for(int i=0; i<cnt-1; i++)
	{
		for(int j=0; j<cnt-i-1; j++)
		{
			if(strcmp(p[j], p[j+1])>0)
			{
				strcpy(temp, p[j]);
				strcpy(p[j], p[j+1]);
				strcpy(p[j+1], temp);
			}
		}
	}
}

