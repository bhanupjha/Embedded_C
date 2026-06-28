#include<stdio.h>
void f1();
void f2();
static int data; //static global variable
int main()
{
 printf("in main\n");
 data++; // 1
 f1(); // 2
 printf("back to main\n");
 f1();// 3
 printf("back to main\n");
 f2();// 4 5
 printf("%d \n",data);
}
void f1()
{
 printf("f1 is called %d \n",data++); // 1
}
void f2()
{
 data++;
 printf("f2 is called %d \n",data++); //4
}
