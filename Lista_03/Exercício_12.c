void frac(float num, int *inteiro, float *frac){
    *inteiro = (int) num;
    *frac = num - *inteiro;
}
int main(){
    float numero;
    int part;
    float fracionaria;

    printf("Digite numero: ");
    scanf("%f", &numero);

    frac(numero, &part, &fracionaria);

    printf("Parte inteira: %d\n", part);
    printf("Parte fracionaria: %.2f\n", fracionaria);

    return 0;
}
