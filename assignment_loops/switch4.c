#include<stdio.h>

int main() {
int n, sum=1;
scanf("%d", &n);
  switch(n)
  {
  case 2:sum=sum+2;
  case 3:sum*=2;
  break;
  default : sum=0;
  }
  printf("%d", sum);
}
