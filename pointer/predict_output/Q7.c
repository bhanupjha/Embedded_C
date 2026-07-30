int main() {
int i1=520,i2=0;
 float f1=23.4,f2=0.0;
char *ptr;
ptr=&i1;
i2=*ptr;//i2=*(int*)ptr;
ptr=&f1;
f2=*ptr;//d2=*(float*)ptr;
printf("i2=%d f2=%f\n",i2,f2);
}
