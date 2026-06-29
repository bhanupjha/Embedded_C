// WAP scan 6 subject marks print and calculate total marks
#include<stdio.h>
void input(float *, float);
void print(float *, float);
void revarr(float *, float);
int main()
{
	float totalmarks;
	float marks[6];
	input(marks, 6);
	print(marks,6);
	revarr(marks, 6);
        print(marks,6);
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

void revarr(float *p, float s)
{	
	for(int i=0, j=s-1; i<j; i++, j--)
        {
		float t;
                t=p[i];
		p[i]=p[j];
		p[j]=t;
        }	
	printf("\n");

}
