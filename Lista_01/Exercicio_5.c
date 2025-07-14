int main(){
int n, contador = 0, numero = 1;

scanf("%d", &n);

while(contador < n){
    printf("%d", numero);
    contador ++;

if(contador < n){
    printf(",");
}
numero += 2;
}

printf("\n")
