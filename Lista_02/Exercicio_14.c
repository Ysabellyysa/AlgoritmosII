float carro(float km, float litros) {
    return km / litros;
}

void mostrarMensagem(float consumo) {
    if (consumo < 8) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }
}

int main() {
    float km, litros;

    printf("Digite a distância percorrida (km): ");
    scanf("%f", &km);

    printf("Digite os litros consumidos: ");
    scanf("%f", &litros);

    float consumo = carro(km, litros);
    printf("Consumo = %.2f km/l\n", consumo);
    mostrarMensagem(consumo);

    return 0;
}
