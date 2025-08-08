int main() {
    int *vetor;
    int i, cont = 0;

    vetor = (int *) calloc(1500, sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    for (i = 0; i < 1500; i++) {
        if (vetor[i] == 0) {
            cont++;
        }
    }
    printf("Quantidade de zeros encontrados: %d\n", cont);
    for (i = 0; i < 1500; i++) {
        vetor[i] = i;
    }
    printf("\n10 primeiros elementos:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n10 ultimos elementos:\n");
    for (i = 1490; i < 1500; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
