#include<stdio.h>

 int main ()
{
int i, j, sum = 0,n;
scanf("%d", &n);
for(i = 1;i<=n;i++)
  for(j=i;j<=i;j++)
  sum=sum+j;
printf("%d\n",sum);
}
