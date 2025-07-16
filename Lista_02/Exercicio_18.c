int potencia(int x, int z) {
    int resultado = 1;
    for (int i = 0; i < z; i++) {
        resultado *= x;
    }
    return resultado;
}

int main() {
    int x, z;
    printf("Digite os valores de x e z: ");
    scanf("%d %d", &x, &z);

    int resultado = potencia(x, z);
    printf("Resultado: %d\n", x, z, resultado);

    return 0;
}
