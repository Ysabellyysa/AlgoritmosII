int fatorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    int resultado = fatorial(n);
    printf("Fatorial de %d: %d\n", n, resultado);

    return 0;
}
