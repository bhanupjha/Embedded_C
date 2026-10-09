// name database using pointer to array
// where rows are variable and column are fixed

#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

char* Insert(char (*p) [20]);
int cnt;
int main()
{
	char (*DB)[20]=NULL;
	char choice;
	while(1)
	{
		printf("Press: i. Insert, p. Print, d. Delete, s. Sort, e. exit\n");
		printf("Enter the choice:\n");
		__fpurge(stdin);
		scanf("%c", &choice);
		switch(choice)
		{
			case 'i': DB=Insert(DB);
				  break;
//			case 'p': DB=Print(DB);
                                  break;
			case 'e': exit(0);
		}
	}
}

char* Insert(char (*p) [20])
{
	p = realloc(p, (cnt+1)*sizeof(*p));
	printf("Enter the string:\n");
	scanf("%s", p[cnt]);
	cnt++;
	return p;
}
