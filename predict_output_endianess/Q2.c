int main()
{
int x = 0x12345678;
unsigned char *p = (unsigned char *)&x;
printf("%x \n", *p);
p++;
printf("%x\n",*p);
return 0;
}

