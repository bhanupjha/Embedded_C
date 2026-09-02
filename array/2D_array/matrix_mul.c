// matrix multiplication

#define ROW 3
#define COL 3

#include<stdio.h>
void Input(int (*)[COL]);
void Print(int (*)[COL]);
void Mul(int (*)[COL], int (*)[COL], int (*)[COL]);
int main()
{
	int M1[ROW][COL], M2[ROW][COL], M3[ROW][COL];
	printf("Taking input of M1 atrix:\n");
	Input(M1);
	printf("Taking input of M2 atrix:\n");
	Input(M2);
	printf("Printing the M1 matrix:\n");
	Print(M1);
	printf("Printing the M2 matrix:\n");
	Print(M2);
	Mul(M1, M2, M3);
	printf("After Multiplication Printing the M3 matrix:\n");
	Print(M3);
}

void Input(int (*p)[COL])
{
	for(int i=0; i<ROW; i++)
	{
		printf("Enter the elements:\n");
		for(int j=0; j<COL; j++)
		{
			scanf("%d", &p[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Print(int (*p)[COL])
{
	printf("Printing the elements:\n");
        for(int i=0; i<ROW; i++)
        {
                for(int j=0; j<COL; j++)
                {
                        printf("%d ", p[i][j]);
                }
                printf("\n");
        }
        printf("\n");
}

void Mul(int (*p)[COL], int (*q)[COL], int (*r)[COL])
{
        for(int i=0; i<ROW; i++)
        {
                for(int j=0; j<COL; j++)
                {
 			r[i][j]=0;
   			for(int k=0; k<COL; k++)
			{
				r[i][j] = (r[i][j] + (p[i][k] * q[k][j]));
			}			
                }
                printf("\n");
        }
        printf("\n");
}

