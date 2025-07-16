int primo(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int contar(int y) {
    int cont = 0;
    for (int i = 2; i < y; i++) {
        if (primo(i)) cont++;
    }
    return cont;
}

int main() {
    int a;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    int total = contar(a);
    printf("Quantidade de primos abaixo de %d: %d\n", a, total);

    return 0;
}
