// syntax of structure pointer creation
#include<stdio.h>

struct contactDB
{
	char name[20];
	char emailid[20];
	char mobile[20];
};
int main()
{
	struct contactDB *ptr; // structure pointer
	printf("Size of ptr:%ld\n", sizeof(ptr));
	printf("Size of (*ptr):%ld\n", sizeof(*ptr));
}
