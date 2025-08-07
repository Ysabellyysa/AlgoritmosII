int main(){
    int n, x, conta = 0;
    int *vetor;

    printf("Quantidade vetor N: ");
    scanf("%d", &n);

    vetor =(int *)malloc(n * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for(int i = 0;i < n; i++){
        printf("Digite o valor %d: ", i +1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (vetor[i] % x == 0) {
            conta++;
        }
    }
    printf("Contagem de multiplos %d do vetor: %d\n", x,conta);

    free(vetor);

return 0;
}
