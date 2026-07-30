int main(){
 int i=50; float f=23.5;//initialisations
 int *ip; float *fp;//declarations. pointers declared.
 ip=&i; fp=&f;//assignments
++(*ip);//increment data indirectly
(*fp)++;
printf("i=%d f=%f\n",i,f); }
