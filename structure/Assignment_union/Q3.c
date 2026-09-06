#include<stdio.h>
 union A
 {
 int x;
char y;
long long int z;
 };
 main()
 {
union A v;
printf("%d\n",sizeof(v));
}
