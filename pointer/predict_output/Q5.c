int main() {
char c1='a',c2;
char *p1=&c1,*p2=&c2;//pointers initialized
*p2=*p1;//Indirectly c2 is assigned with c1.
//c2=c1; //direct assignment.
printf("c1=%c c2=%c\n",c1,c2); }
