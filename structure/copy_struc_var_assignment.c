// copy data to one structure variable to another same type of structure variable Method 1 Assignment

#include<stdio.h>

struct product
{
	char name[20];
	char qty[20];
	char mrp[20];
}prd={"aata", "5", "230"};

int main()
{
	printf("Before copy:\n");
	printf("printing prd Data:\n");
	printf("printing name:%s\n", prd.name);
	printf("printing qty:%s\n", prd.qty);
	printf("printing mrp:%s\n", prd.mrp);
	printf("\n");

	// Assign data to another var of same structure type -> assignment operator
	struct product s2;
	s2=prd;
	printf("After copied to another variable\n");
	printf("MRP:%s\n", s2.mrp);
}
