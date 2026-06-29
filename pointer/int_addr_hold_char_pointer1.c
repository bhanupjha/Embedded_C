#include<stdio.h>
int main()
{
	int x=4567;
	char *p=&x;
	printf("%d", *p); //we expect -> 0 >> but got -41 bcz of byte ordering-> data stored in computer -> intel -> little indian -> LSB stored in base address -> 215 -> signed char range (-127 to 128) -> -41
}
