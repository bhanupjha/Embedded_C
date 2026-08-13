// structure variable intialisation along with declaration

#include<stdio.h>

struct contactDB
{
	char name[20];
	char email[20];
	char mobile[20];
}DB={"hello", "hhh@gmail.com", "123456"};

int main()
{
	printf("printing name:%s\n", DB.name);
	printf("printing email:%s\n", DB.email);
	printf("printing mobile:%s\n", DB.mobile);
}
