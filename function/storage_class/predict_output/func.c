#include<stdio.h>
//void f1();
//The compiler compiles each source file independently. Since func.c has no declearation for f1, it issues an implicit declaration warning.        
//Later, the linker finds the actual definition of f1 in extern_fun.c, so the program links and executes successfully. 
int main()
{
        int data=10;
        printf("%d\n",data); //10
        f1();
}
int x=5;
