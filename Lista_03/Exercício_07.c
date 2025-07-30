void soma(int *x, int y){
    *x = *x + y;
    return 0;
}
int main(){
  int a;
  int b;

  printf("Valor de A: ");
  scanf("%d", &a);
  printf("Valor de B: ");
  scanf("%d", &b);

  soma(&a,b);
  printf("Valor do resultado A: %d\n", a);
  printf("Valor de B: %d\n", b);

}
