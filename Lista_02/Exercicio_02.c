void data(int dia, int mes, int ano) {
    char* meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    printf("Data: %02d/%02d/%d, Imprimir: %d de %s de %d\n", dia, mes, ano, dia, meses[mes - 1], ano);
}

int main() {
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    data(dia, mes, ano);

    return 0;
}
