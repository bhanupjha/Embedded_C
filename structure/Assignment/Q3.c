 #include<stdio.h>
   struct A
  {
int x;
int y;
int *p;
  };
  main()
 {
struct A v={10,20};
v.p=&v.x;
*(v.p)=100;
 v.p=&v.y;
 *(v.p)=200;
 printf("%d %d\n",v.x,v.y);}
