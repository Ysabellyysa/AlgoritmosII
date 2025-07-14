int sinal(int numero) {
    if (numero > 0) return 1;
    else if (numero < 0) return -1;
    else return 0;
}

int main() {
    int num;

    scanf("%d", &num);

    int resultado = sinal(num);

    if (resultado == 1) {
        printf("O numero e positivo.\n");
    } else if (resultado == -1) {
        printf("O numero e negativo.\n");
    } else {
        printf("O numero e zero.\n");
    }

    return 0;
}
