void fun(int n) {
static int x = 0;
if(n > 0) {
x++;
printf("%d ", x);
fun(n- 1);
}
}
int main() {
fun(3); 
}
