float media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A') {
        return (n1 + n2 + n3) / 3;
    } else if (tipo == 'P') {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    } else {
        return -1;
    }
}

int main() {
    float nota1, nota2, nota3;
    char tipo;

    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite o tipo de media (A para aritmetica, P para ponderada): ");
    scanf(" %c", &tipo);

    float total = media(nota1, nota2, nota3, tipo);

    if (total == -1) {
        printf("Tipo invalido\n");
    } else {
        printf("Media = %.2f\n", total);
    }

    return 0;
}
