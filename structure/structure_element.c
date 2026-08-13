// structure members taking input run time and printing their elements

#include<stdio.h>

struct contactDB
{
	char name[20];
	char emailid[20];
	int mobileno;
}DB; // struct contactDB variable declared

int main()
{
	// taking input in run time
	printf("Enter the name:\n");
	scanf("%s", DB.name);
	printf("Enter the emailid:\n");
	scanf("%s", DB.emailid);
	printf("Enter the mobile no:\n");
	scanf("%d", &DB.mobileno);

	// printing elements	
	printf("printing name:%s\n", DB.name);
	printf("printing emailid:%s\n", DB.emailid);
	printf("printing mobile no:%d\n", DB.mobileno);
}
