int main() {
int x=0x1234567;
char *p=&x;
for(int i=0;i<4;i++)
{
	printf("%x\n",*p);
	p++;
}
}
