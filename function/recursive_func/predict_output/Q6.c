void fun(int n) {
if(n > 0) {
printf("%d ", n);
fun(n/2); 
}
}
int main() {
fun(10); }
