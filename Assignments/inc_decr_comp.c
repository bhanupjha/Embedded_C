#include<stdio.h>

int main(){
int a=10,b=11;
//printf("%d\n", ++a);//11
//printf("%d\n", b--);//11
printf("%d\n", ++a > b--);//11>11
printf("a=%d b=%d\n",a,b);// a=11, b= 10
a=10;b=11;
printf("%d\n",a++ < --b);//10<10
}
