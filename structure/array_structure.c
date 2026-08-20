// array of structure variable
#include<stdio.h>

struct st
{
	char name[20];
	int age;
	float marks;
};

int main()
{
	struct st arr[5]; // array structure syntax
	printf("Size of array structure:%ld\n", sizeof(arr));

	// printing size of member 
	printf("Size of array structure member:%ld\n", sizeof(*arr));
	printf("Size of array structure member:%ld\n", sizeof(arr[0]));
}
