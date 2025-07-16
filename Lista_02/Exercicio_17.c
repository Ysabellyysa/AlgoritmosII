int soma(int a, int b) {
    int soma = 0;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a + 1; i < b; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    int resultado = soma(num1, num2);

    printf("Soma dos numeros entre eles = %d\n", resultado);

    return 0;
}
