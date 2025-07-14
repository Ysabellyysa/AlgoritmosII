int main(){
int val[5];
int i = 0;
int maior,menor,soma=0;
float media;

while(i < 5){
    printf("Entre com o numero %d :", i + 1);
    scanf("%d", &val[i]);

if(i == 0) {
        maior = menor = val[i];
    } else {
        if(val[i] > maior) {
            maior = val[i];
        }
        if(val[i] < menor) {
            menor = val[i];
        }
    }

    soma += val[i];
    i++;
}
printf("Os numeros digitados sao: ");
for(i = 0; i < 5; i++) {
    printf("%d ", val[i]);
}

media = soma / 5.0;

printf("\nO maior valor e: %d", maior);
printf("\nO menor valor e: %d", menor);
printf("\nA media e: %.1f\n", media);
