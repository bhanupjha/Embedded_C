// x, y, z all have same memory location address same
// first value 10 is assigned to all

#include<stdio.h>
 union A
 {
 int x;
 int y;
 int z;
}v={10,20,30};
 main()
{
printf("x add:%u\n",&v.x);
 printf("y add:%u\n",&v.y);
 printf("z add:%u\n",&v.z);
printf("%d    %d   %d\n",v.x,v.y,v.z);
 }

