int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    printf("Digite o numero: ");
    scanf("%d", &x);

    printf("Digite o numero: ");
    scanf("%d", &y);

    printf("O maior numero e: %d\n", maior(x, y));
    return 0;
}
