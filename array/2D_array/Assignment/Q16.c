int main()
{ int a[3][4];
printf("%zu\n", sizeof(a+1)); // pointer size -> 8 bytes
printf("%zu\n", sizeof(a+2)); // pointer size -> 8 bytes
}
