// WAP scan 6 subject marks print and calculate total marks
#include<stdio.h>
void input(float *, float);
void print(float *, float);
float caltotalmarks(float *, float);
int main()
{
	float totalmarks;
	float marks[6];
	input(marks, 6);
	print(marks,6);
	totalmarks= caltotalmarks(marks, 6);
        printf("Total marks of 6 subject is: %.2f\n", totalmarks);

}

void input(float *p, float s)
{
	for(int i=0; i<s; i++)
	{
		printf("Enter the Marks: ");
		scanf("%f", &p[i]);
	}
}

void print(float *p, float s)
{
        for(int i=0; i<s; i++)
        {
                printf("%.2f, ", p[i]);
        }
	printf("\n");
}

float caltotalmarks(float *p, float s)
{
	float sum=0;
        for(int i=0; i<s; i++)
        {
                sum=sum+p[i];
        }
	return sum;
}
