int main() {
    int *vetor, n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;
}
