int main(){
    int tamanho;
    int *memoria;
    int n, posicao,valor,opcao;

   do {
        printf("Digite o tamanho da memoria em bytes (multiplo de %zu): ", sizeof(int));
        scanf("%d", &tamanho);
        if (tamanho % sizeof(int) != 0) {
            printf("Erro: o tamanho deve ser multiplo de %zu bytes.\n", sizeof(int));
        }
    } while (tamanho % sizeof(int) != 0);
    n = tamanho / sizeof(int);

     memoria = (int *) calloc(n, sizeof(int));
    if (memoria == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i=0;i<1;i++){
        printf("1-inserir o valor em posicao\n");
        printf("2-consultar o valor em posicao\n");
        printf("\nEscolha uma opcao\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a posicao (0 a %d): ", n - 1);
                scanf("%d", &posicao);
                if (posicao < 0 || posicao >= n) {
                    printf("Posicao invalida!\n");
                } else {
                    printf("Digite o valor a inserir: ");
                    scanf("%d", &valor);
                    memoria[posicao] = valor;
                    printf("Valor inserido com sucesso.\n");
                }
                break;

            case 2:
                printf("Digite a posicao para consultar (0 a %d): ", n - 1);
                scanf("%d", &posicao);
                if (posicao < 0 || posicao >= n) {
                    printf("Posicao invalida!\n");
                } else {
                    printf("Valor na posicao %d: %d\n", posicao, memoria[posicao]);
                }
                break;

            default:
                printf("Opcao invalida!\n");
         }
      }



    free(memoria);
    return 0;
}
