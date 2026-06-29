// WAP scan 6 subject marks print and calculate total marks
#include<stdio.h>
void input(float *, float);
void print(float *, float);
void revprint(float *, float);
int main()
{
	float totalmarks;
	float marks[6];
	input(marks, 6);
	print(marks,6);
	revprint(marks, 6);
        
}

void input(float *p, float s)
{
	for(int i=0; i<s; i++)
	{
		printf("Enter the elements: ");
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

void revprint(float *p, float s)
{	
	for(int i=s-1; i>=0; i--)
        {
                printf("%.2f, ", p[i]);
        }	
	printf("\n");

}
