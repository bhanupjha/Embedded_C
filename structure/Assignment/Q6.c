// error -> bit field only apply on integral dataypes

#include<stdio.h>
  struct st
  {
int a:5;
char b:3;
float c:2; 
 };
 main()
 {
struct st v;
printf("%d\n",sizeof(v));}
