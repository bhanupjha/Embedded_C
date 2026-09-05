// Dynamic memory allocation using calloc
// syntax: void* calloc(int blocks, size_t sizeof block);

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int size;
	printf("Enter the no.of elements:\n");
	scanf("%d", &size);
	ptr=calloc(size, sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory allocation failed\n");
		exit(0);
	}
	/** memory allocation successful, calloc initializes elements to zero **/
	for(int i=0; i<size; i++)
	{
		printf("Enter the elements:\n");
		scanf("%d", &ptr[i]);
	}
	printf("Printing the elements:\n");
	for(int i=0; i<size; i++)
        {
                printf("%d ", ptr[i]);
        }
	printf("\n");
}
