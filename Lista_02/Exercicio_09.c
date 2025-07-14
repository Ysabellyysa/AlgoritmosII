float cilindro(float raio, float altura) {
    int pi = 3.141592;
    float volume = pi * raio * raio * altura;
    return volume;
}

int main() {
    float r, h;
    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("Digite a altura: ");
    scanf("%f", &h);

    float v = cilindro(r, h);
    printf("Volume do cilindro = %.2f\n", v);
    return 0;
}
