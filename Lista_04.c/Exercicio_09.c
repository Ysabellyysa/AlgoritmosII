
int main() {
    int *vetor = NULL;
    int tamanho = 0;
    int num;

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        tamanho++;
        vetor = realloc(vetor, tamanho * sizeof(int));
        if (vetor == NULL) {
            printf("Erro ao alocar memoria!\n");
            return 1;
        }

        vetor[tamanho - 1] = num;
    }

    printf("\nNumeros digitados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;
}
