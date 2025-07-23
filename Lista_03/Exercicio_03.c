int main() {
    int x, y;
    int *p1, *p2;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    p1 = &x;
    p2 = &y;

    if (p1 > p2) {
        printf("O maior endereco e de X: %p\n", (void*)p1);
        printf("Valor contido nesse endereco: %d\n", *p1);
    } else {
        printf("O maior endereco e de Y: %p\n", (void*)p2);
        printf("Valor contido nesse endereco: %d\n", *p2);
    }

    return 0;
}
