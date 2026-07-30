int main()
{
unsigned int x = 0x11223344;
unsigned char *p = (unsigned char *)&x;
for(int i=0;i<4;i++)
{
printf("%x \n",*p);
p++;
}
return 0;
}
