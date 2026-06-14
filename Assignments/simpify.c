#include<stdio.h>

main(){ int a=2,b=4,c=5;
a+=b*=c-=10;
printf("%d %d %d\n",a,b,c);
}
