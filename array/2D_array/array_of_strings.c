// array of strings

#include<stdio.h>
void Input(char (*)[20]);
void Print(char (*)[20]);
int main()
{
	char colors[5][20];
	Input(colors);
	Print(colors);
}

void Input(char (*p)[20])
{
	for(int j=0; j<5; j++)
	{
		printf("Enter the color:\n");
		scanf("%s", p[j]); 
	}
	printf("\n");
}

void Print(char (*p)[20])
{
	printf("Printing the colors:\n");
        for(int j=0; j<5; j++)
        {
                 printf("%s\n", p[j]);
        }
        printf("\n");
}
