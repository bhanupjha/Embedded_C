// Dynamic memory allocation using malloc
// reallocation of memory using realloc
// syntax: void* malloc(size_t); --> malloc
// syntax: void* realloc(void* ptr, size_tsize);  --> realloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int size;
	printf("Enter the no.of elements:\n");
	scanf("%d", &size);
	ptr=malloc(size*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory allocation failed\n");
		exit(0);
	}
	/** memory allocation successfull, initialise the array **/
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


	/** resizing the memory allocated malloc **/
	ptr=realloc(ptr, 2*size*sizeof(int));
	for(int i=size; i<2*size; i++)
	{
		printf("Enter the elements:\n");
		scanf("%d", &ptr[i]);
	}
	printf("printing the elements after reallocation:\n");
	for(int i=0; i<2*size; i++)
        {
                printf("%d ", ptr[i]);
        }
}
