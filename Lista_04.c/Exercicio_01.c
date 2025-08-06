int main() {
    int *vetor;

    vetor = (int *) malloc(5 * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros digitados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
    }

