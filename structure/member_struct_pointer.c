// Accessing the member of structure pointer
#include<stdio.h>

struct st
{
	char name[20];
	int age;
	float marks;
};

int main()
{
	struct st var={"abcd", 22, 78.9};
	struct st *ptr;

	// unpredicatable bcz we didn't intialize pointer
//	printf("Access name:%s\n", ptr->name); // invalid
	// No var present in member of structure -> invalid
//	printf("Access Name:%s\n", ptr->var.name); // invalid c-error
	
	ptr=&var; // intialize pointer
	printf("Access Name:%s\n", ptr->name); // internally ptr->name - (*ptr).name
	printf("Access Age:%d\n", ptr->age);
	printf("Access Marks:%f\n", ptr->marks);

	// try ptr->name as (*ptr).name
	printf("Access Name using another method:%s\n", (*ptr).name); // valid
//	printf("Access Name using another method:%s\n", *(ptr.name)); // invalid c-error
}
