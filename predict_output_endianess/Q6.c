int main() {
int x=0x1234567;
char *p=&x;
printf("%x\n",*p);
printf("%x\n",*(p+3));
}

