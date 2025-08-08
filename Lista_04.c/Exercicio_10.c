
int main() {
    int n, i;
    double *vetor;

    printf("Quantos valores deseja armazenar;: ");
    scanf("%d", &n);

    if (n < 10) {
        n = 10;
        printf("Tamanho ajustado para 10.\n");
    }

    vetor = (double *) malloc(n * sizeof(double));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        vetor[i] = (rand() % 101);
    }

    printf("\nOs 10 primeiros valores gerados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");


    free(vetor);

    return 0;
}
