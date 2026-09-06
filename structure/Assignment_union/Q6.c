#include<stdio.h>
 union A
 {
 int x;
char y;};
 main()
 {
union A v={515};
 printf("v.x=%d  v.y=%d\n",v.x,v.y);
 v.y='a';
 printf("v.x=%d  v.y=%d\n",v.x,v.y);
 }
