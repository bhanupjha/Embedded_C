// structure variable intialisation and printing compile time

#include<stdio.h>

struct product
{
	char name[20];
	int quantity;
	float price;
};

struct product var = {"Hello", 10, 10.5};

int main()
{
	printf("printing name:%s\n", var.name);
	printf("printing qty.:%d\n", var.quantity);
	printf("printing price:%f\n", var.price);
}
