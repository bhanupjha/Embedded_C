// convert to little Endian

#include<stdio.h>
 union A
 {
struct st1
 {
char c[2];   //2
 char ch[2];  //2
}s1;
struct st2
{
 short int x;  //2
 short int y;  //2
}s2;
 }v={12,1,15,1};
 main()
 {
printf("%d\n",v.s2.x);
 printf("%d\n",v.s2.y);
 }
