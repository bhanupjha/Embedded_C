// copy data to one structure variable to another same type of structure variable Method 2 strcpy
// strcpy use when all members of structure is string data type

#include<stdio.h>
#include<string.h>
struct product
{
	char name[20];
	char qty[20];
	char mrp[20];
	int unit;
}prd={"aata", "5", "230", 1};

int main()
{
	printf("Before copy:\n");
	printf("printing prd Data:\n");
	printf("printing name:%s\n", prd.name);
	printf("printing qty:%s\n", prd.qty);
	printf("printing mrp:%s\n", prd.mrp);
	printf("\n");

	// Assign data to another var of same structure type -> strcpy
	struct product s2;
	// if members is string than strcpy
	strcpy(s2.name, prd.name);
	strcpy(s2.qty, prd.qty);
	strcpy(s2.mrp, prd.mrp);
	// strcpy -> 1 as its memory address try to derefrence it leads to segmentation fault
//	strcpy(s2.unit, prd.unit); // segmentation fault -> unit is not string  
	// if member different go with assignment members by members
	s2.unit=prd.unit;
	printf("After copied to another variable\n");
	printf("MRP:%s\n", s2.mrp);
	printf("Unit:%d\n", s2.unit);
}
