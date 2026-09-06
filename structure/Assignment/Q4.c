// invalid can't intialize a structure at time declearation

#include<stdio.h>
 struct A
 {
 int x=10; 
 int y=20;
 }v;
 main()
 {
printf("%d %d\n",v.x,v.y);}
