#include<stdio.h>
extern int data; //extern is only applicable to global var 
void f1()
{
printf("%d",data);
}
