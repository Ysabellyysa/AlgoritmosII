float esfera(float raio) {
    float pi = 3.14159;
    return (4.0 / 3.0) * pi * pow(raio, 3);
}

int main() {
    float raio;
    scanf("%f", &raio);

    float volume = esfera(raio);

    printf("O volume da esfera de raio %.2f e: %.2f\n", raio, volume);

    return 0;
}
