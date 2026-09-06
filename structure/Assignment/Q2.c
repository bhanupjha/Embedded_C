#include<stdio.h>
 struct A
 {
int x;
int y;
 };
 main()
 {
struct A v={10,20};
struct A *p=&v; //p is structure pointer
printf("%d  %d\n",p->x,p->y);}
