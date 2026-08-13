// structure declaration, variable creationsize of structure

#include<stdio.h>

struct product
{
	char name[20];
	int quantity;
	float price;
};

struct product var;  // global decln

int main()
{
	printf("Size of var:%ld\n", sizeof(var)); // access through variable
	printf("Size of var:%ld\n", sizeof(struct product)); // access through datatype
}
