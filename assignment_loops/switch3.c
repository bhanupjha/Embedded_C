#include<stdio.h>

 main() {
 int x = 5, y = 2 ;
 char op =  '*' ;
 switch ( op )
 {
     default : x += 1 ;
     case '+' : x += y ;
     case  '-' : x -= y ;
   }
 printf("%d",x);
    }
