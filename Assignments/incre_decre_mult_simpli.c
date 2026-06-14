#include<stdio.h>

main() {
int z,x=5,y=-10,a=4,b=2;
z=x++ - --y * --b / a;
printf("%d\n", z);
printf("%d%d%d%d\n", x,y,a,b);
}

