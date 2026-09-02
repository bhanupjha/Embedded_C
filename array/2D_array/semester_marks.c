// WAP to read the 6 subject marks of 4 semester and get there highest marks of each sem
// and there total and grand total

#include<stdio.h>

void Input(float (*)[6], int, int);
void Print(float (*)[6], int, int);
void HM(float (*)[6], int, int);
int main()
{
	float marks[4][6];
	Input(marks, 4, 6);
	Print(marks, 4, 6);
	HM(marks, 4, 6);
}

void Input(float (*p)[6], int r, int c)
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("Enter the semester%d marks:\n", (i+1));
			scanf("%f", &p[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Print(float (*p)[6], int r, int c)
{
	float total, grand_total=0;
        for(int i=0; i<r; i++)
        {
		total=0;
		printf("printing the semester%d marks:\n", (i+1));
                for(int j=0; j<c; j++)
                {
                        total += p[i][j];
			printf("%.2f\n", p[i][j]);
                }
		printf("Total marks of semester%d is: %.2f\n", (i+1),total);
                grand_total += total;
        }
	printf("Total marks of All semester is: %.2f\n", grand_total);
}

void HM(float (*p)[6], int r, int c)
{
	int k=0;
        for(int i=0; i<r; i++)
        {
		p[i][k]=0;
                for(int j=0; j<c; j++)
                {
                        if(p[i][j]>p[i][k])
			{
				p[i][k]=p[i][j];
			}
                }
                printf("Highest mark in semester%d is: %.2f\n", (i+1), p[i][k]);
        }
        printf("\n");
}
