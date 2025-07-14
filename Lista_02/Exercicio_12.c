int algarismos(int num) {
    if (num <= 0) {
        return -1;
    }

    int soma = 0;
    while (num > 0) {
        soma += num % 10;
        num = num / 10;
    }

    return soma;
}

int main() {
    int numero;

    scanf("%d", &numero);

    int resultado = algarismos(numero);

    if (resultado == -1) {
        printf("Número inválido.\n");
    } else {
        printf("Soma dos algarismos = %d\n", resultado);
    }

    return 0;
}
