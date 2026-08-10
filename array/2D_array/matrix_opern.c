# define ROW 3
# define COL 3

#include<stdio.h>
void Input(int (*)[COL]);
void Print(int (*)[COL]);
void Add(int (*)[COL], int (*)[COL], int (*)[COL]);
void Sub(int (*)[COL], int (*)[COL], int (*)[COL]);
void Mul(int (*)[COL], int (*)[COL], int (*)[COL]);
int main()
{
	int M1[ROW][COL], M2[ROW][COL], M3[ROW][COL], M4[ROW][COL];
	printf("Enter the M1 Elements:\n");
	Input(M1);
	printf("Enter the M2 Elements:\n");
	Input(M2);
	printf("Printing the M1 Elements:\n");
	Print(M1);
	printf("Printing the M2 Elements:\n");
	Print(M2);
	Add(M1, M2, M3);
	printf("After Adding M1 + M2:\n");
	printf("Storing in M3:\n");
	Print(M3);
	Sub(M1, M2, M4);
        printf("After Adding M1 + M2:\n");
        printf("Storing in M4:\n");
        Print(M4);
}

void Input(int (*p) [COL])
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

void Print(int (*p) [COL])
{
	for(int i=0; i<ROW; i++)
        {
                for(int j=0; j<COL; j++)
                {
                        printf("%d  ", p[i][j]);
                }
		printf("\n");
        }
	printf("\n");
}

void Add(int (*p)[COL], int (*q)[COL], int (*r)[COL])
{
	for(int i=0; i<ROW; i++)
	{
		for(int j=0; j<COL; j++)
		{
			r[i][j] = p[i][j] + q[i][j];
		}
	}
	printf("\n");
}

void Sub(int (*p)[COL], int (*q)[COL], int (*r)[COL])
{
        for(int i=0; i<ROW; i++)
        {
                for(int j=0; j<COL; j++)
                {
                        r[i][j] = p[i][j] - q[i][j];
                }
        }
        printf("\n");
}
