#include<stdio.h>
void f1();
void f2();
int main()
{
 printf("in main\n");
 f1();
 printf("back to main\n");
 f1();
 printf("back to main\n");
 f2();
}
void f1()
{
 static int cnt=0; // static local ->  cnt retains its value to f1() cannot be accessible to any other func i.e main() , f2()
 printf("f1 is called %d times\n",++cnt);
}
void f2()
{
 f1();
}
