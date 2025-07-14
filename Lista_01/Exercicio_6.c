int main(){
int i,j,n,contador =0, numero =0;

printf("N =");
scanf("%d", &n);
printf("I =");
scanf("%d", &i);
printf("J =");
scanf("%d", &j);

while(contador < n){
    if(numero % i == 0 | numero % j == 0 ){
        printf("%d", numero);
        contador++;
    if(contador < n){
        printf(",");
      }

    }
    numero ++;
}
printf("\n");
