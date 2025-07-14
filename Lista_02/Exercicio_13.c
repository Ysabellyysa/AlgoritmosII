float calcular(float a, float b, char operador) {
    switch (operador) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else {
                printf("Erro: divisão por zero.\n");
                return 0;
            }
        default:
            printf("Operador inválido.\n");
            return 0;
    }
}

int main() {
    float num1, num2;
    char op;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op);
    float resultado = calcular(num1, num2, op);

    printf("Resultado = %.2f\n", resultado);
    return 0;
}
