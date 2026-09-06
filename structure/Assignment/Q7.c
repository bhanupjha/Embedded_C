// Bit-field width -> controls how many bits the particular member can use.

// sizeof(struct) -> determined by the compiler's layout, allocation and alignment rules.

#include<stdio.h>
 struct st
 {
 int a:5;
 char b:3;
int c:2;
};
main()
{
struct st v;
printf("%d\n",sizeof(v));
/*printf("%u\n",&v.a);  // in bit field we cannot read address & compiler choice where to allocate
printf("%u\n",&v.b);
printf("%u\n",&v.c);*/}
