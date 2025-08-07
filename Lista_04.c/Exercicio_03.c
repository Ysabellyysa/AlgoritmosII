int main(){
    int *p,n;
    int pares = 0, impares = 0;

    printf("Digite a quantidade: ");
    scanf("%d", &n);

    p =(int *)malloc(n * sizeof(int));
    if(p == NULL){
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    for(int i = 0;i < n; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &p[i]);
    if(p[i] % 2 == 0){
        pares++;
    }else{
        impares++;
    }
    }
    printf("\nPares: %d", pares);
    printf("\nImpares: %d", impares);

    free(p);

return 0;
}
