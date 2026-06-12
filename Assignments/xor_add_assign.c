#include<stdio.h>

 main() { int a = 123, b = 456;
a ^= b ^= a ^= b;
printf(" %d %d" , a,b); }
