// scan and print the 2D array elements
#define ROW 2
#define COL 2

#include<stdio.h>
void Input(int (*)[COL]);
void Print(int (*)[COL]);
int main()
{
	int M1[ROW][COL];
        printf("Enter the M1 Elements:\n");	
	Input(M1);
	printf("Printing the M1 Elements:\n");
	Print(M1);
}

void Input(int (*p)[COL])
{
	for(int i=0; i<ROW; i++)
	{
		for(int j=0; j<COL; j++)
		{
			printf("Enter the elements:\n");
			scanf("%d", &p[i][j]);
		}
	}
	printf("\n");
}

void Print(int (*q)[COL])
{
	for(int i=0; i<ROW; i++)
	{
		for(int j=0; j<COL; j++)
		{
			printf("%d  ", q[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


