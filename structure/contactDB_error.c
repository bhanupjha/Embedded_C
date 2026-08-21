// creating contact Database using structure

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

#define MAX 5
//void insert(struct person*);  // declare function declaration after struct declaration

struct Person
{
	char name[20];
	char emailid[20];
	char mobile[20];
};

void Insert(struct Person*);
void Print(struct Person*); 

int cnt;

int main()
{
	struct Person CDB[MAX];
        char  choice;
	while(1)
	{
		printf("I. Insert, P. Print, D. Delete, S. Sort, E. Exit\n");
		printf("Enter the choice\n");
		__fpurge(stdin);
		scanf("%c", &choice);
		switch(choice)
		{
			case 'I': Insert(CDB);
				  break;
			case 'P': Print(CDB);
				  break;
			case 'E': exit(0);
		}
	}	
}

void Insert(struct Person *ptr)
{
	if(cnt==MAX)
	{
		printf("CDB is Full");
	}
	else
	{
		printf("Enter the name:\n");
		scanf("%s", ptr[cnt].name);
	//	scanf("%s", (ptr+cnt)->name);
		printf("Enter the emailid:\n");
		scanf("%s", ptr[cnt].emailid);
		printf("Enter the mobile:\n");
		scanf("%s", ptr[cnt].mobile);
	}
}

void Print(struct Person *ptr)
{
	for(int i=0; i<cnt; i++)
	{
		printf("%s %s %s\n", ptr[i].name, ptr[i].emailid, ptr[i].mobile);
	}
}
