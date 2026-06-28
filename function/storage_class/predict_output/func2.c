#include<stdio.h>
void f1();
int main()
{
        int data=10; // local var its cant be accessible in another function or another file.
        printf("%d\n",data);
	f1();
}
