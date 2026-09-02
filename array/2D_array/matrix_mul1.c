// matrix multiplication diff row and col

#define R1 3
#define C1 2
#define R2 2
#define C2 3

#include<stdio.h>

void Print(int (*)[C2]);
void Mul(int (*)[C1], int (*)[C2], int (*)[C2]);
int main()
{
	int M1[R1][C1]={{1,3}, {4,5}, {3,2}}, M2[R2][C2]={{4,5,6}, {3,2,1}}, M3[R1][C2];
	Mul(M1, M2, M3);
	printf("After Multiplication Printing the M3 matrix:\n");
	Print(M3);
}

void Print(int (*p)[C2])
{
	printf("Printing the elements:\n");
        for(int i=0; i<R1; i++)
        {
                for(int j=0; j<C2; j++)
                {
                        printf("%d ", p[i][j]);
                }
                printf("\n");
        }
        printf("\n");
}

void Mul(int (*p)[C1], int (*q)[C2], int (*r)[C2])
{
        for(int i=0; i<R1; i++)
        {
                for(int j=0; j<C2; j++)
                {
 			r[i][j]=0;
   			for(int k=0; k<C1; k++)
			{
				r[i][j] = (r[i][j] + (p[i][k] * q[k][j]));
			}			
                }
                printf("\n");
        }
        printf("\n");
}

