//malloc → allocation only
//calloc → allocation + zero initialization

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p;
	p=malloc(5*sizeof(int));
	for(int i=0; i<5; i++)
	{
		p[i]=100+i;
	}
	
	printf("\nMalloc Memory:\n");
	for(int i=0; i<5; i++)
        {
                printf("%d ", p[i]);
        }
	free(p);
	
	p=calloc(5, sizeof(int));
	printf("\nCalloc Memory:\n");
        for(int i=0; i<5; i++)
        {
                printf("%d ", p[i]);
        }
	free(p);
}
