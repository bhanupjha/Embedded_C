#include<stdio.h>

main(){ int bitMask=1;
printf("%d\n", 50 & bitMask);
bitMask=32;printf("%d\n",50 & bitMask);
printf("%d\n",60 & bitMask);
printf("%d\n",70 & bitMask);
bitMask=512;
printf("%d\n",525&bitMask); }
