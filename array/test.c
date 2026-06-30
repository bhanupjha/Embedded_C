#include<stdio.h>
void input(int *, int);
void print(int *, int);
int main()
{
	int a[5];
	input(a, 5);
	print(a, 5);
}


void input(int *p, int b)
{
        for(int i=0; i<b; i++)
        {
                printf("Enter the elements: ");
                scanf("%d", &p[i]);
        }
}

void print(int *p, int b)
{
        for(int i=0; i<=b; i++)
        {
                printf("%d, ", p[i]);
        }
        printf("\n");
}
