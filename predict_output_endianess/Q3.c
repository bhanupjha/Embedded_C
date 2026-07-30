int main()
{
int x = 0x12345678;
short int *p = (short *)&x;
printf("%x\n", *p);
return 0;
}
