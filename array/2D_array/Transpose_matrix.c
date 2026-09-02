// Transpose of matrix

#define ROW 3
#define COL 4

#include<stdio.h>

void Input(int(*)[COL]);
void Print(int(*)[COL]);
void Transpose(int(*)[COL]);
int main()
{
	int M1[ROW][COL];
	Input(M1);
	Print(M1);
	Transpose(M1);
}

void Input(int(*p)[COL])
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

void Print(int(*p)[COL])
{
	printf("printing the elements:\n");
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

void Transpose(int(*p)[COL])
{
	printf("Transpose of the Matrix:\n");
	for(int i=0; i<COL; i++)
        {
                for(int j=0; j<ROW; j++)
                {
                        printf("%d ", p[j][i]);
                }
                printf("\n");
        }
        printf("\n");

}
