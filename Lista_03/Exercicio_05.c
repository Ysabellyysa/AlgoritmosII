void organizar(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main() {
    int x;
    int y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite o segundo valor: ");
    scanf("%d", &y);


    organizar(&x, &y);

    printf("\nMaior valor: %d\n", x);
    printf("Menor valor: %d\n", y);

    return 0;
}
