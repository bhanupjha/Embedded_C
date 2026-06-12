#include<stdio.h>

int main(){
int a=10,b=20;
printf("a=%d b=%d\n",a,b);
//b=a*b/a=b; this statement is wrong cannot assign data in mathmatics expression
b=a*b/(a=b); 
printf("a=%d b=%d\n",a,b);
b=(a*b)/(a=b);
printf("a=%d b=%d\n",a,b);
b=((a*b)/(a=b));
printf("a=%d b=%d\n",a,b);
}
