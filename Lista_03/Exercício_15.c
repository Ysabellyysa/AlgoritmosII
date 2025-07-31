int raizes(float A, float B, float C, float *X1, float *X2) {
    if (A == 0) {
        return 0;
    }

    float delta = B * B - 4 * A * C;

    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *X1 = -B / (2 * A);
        return 1;
    } else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}
int main() {
    float a, b, c, r1, r2;
    int resultado;

    printf("Digite os coeficientes A: ");
    scanf("%f", &a);
    printf("Digite os coeficientes B: ");
    scanf("%f", &b);
    printf("Digite os coeficientes C: ");
    scanf("%f", &c);

    resultado = raizes(a, b, c, &r1, &r2);

    if (resultado == 0) {
        printf("Nao existem raizes reais.\n");
    } else if (resultado == 1) {
        printf("Existe uma raiz real: %.2f\n", r1);
    } else {
        printf("Existem duas raizes reais: %.2f e %.2f\n", r1, r2);
    }

    return 0;
}
