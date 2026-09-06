// both sharing same memory 

 #include<stdio.h>
  union A
  {
  int x;
  int y;
  }v={10};
 main()
 {
 printf("%d    %d\n",v.x,v.y);
 v.y=20;
 printf("%d    %d\n",v.x,v.y);
 }
