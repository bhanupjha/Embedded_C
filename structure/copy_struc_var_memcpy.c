// copy data to one structure variable to another same type of structure variable Method 3 memcpy

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

	// Assign data to another var of same structure type -> memcpy
	struct product s2;
	memcpy(&s2, &prd, sizeof(prd));

	// using & address operator bcz s2, prd is structure data type not string 
	// their members are string using memcpy can be access like
/*	memcpy(s2.name, prd.name, sizeof(prd.name));
	memcpy(s2.qty, prd.qty, sizeof(prd.qty));
	memcpy(s2.mrp, prd.mrp, sizeof(prd.mrp));

	// array name -> automatically gives address of first element
	// normal variable -> use &(ampersand) to get addr
//	memcpy(s2.unit, prd.unit, sizeof(prd.unit));// -> segmentation fault try to derefrence 1
	memcpy(&s2.unit, &prd.unit, sizeof(prd.unit));
*/
	printf("After copied to another variable\n");
	printf("MRP:%s\n", s2.mrp);
	printf("Name:%s\n", s2.name);
	printf("Unit:%d\n", s2.unit);
}
