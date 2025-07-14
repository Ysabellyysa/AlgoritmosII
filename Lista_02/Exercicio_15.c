int formaTriangulo(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void tipoTriangulo(float a, float b, float c) {
    if (a == b && b == c) {
        printf("Triangulo Equilatero\n");
    } else if (a == b || a == c || b == c) {
        printf("Triangulo Isosceles\n");
    } else {
        printf("Triangulo Escaleno\n");
    }
}

int main() {
    float x, y, z;

    printf("Digite os 3 lados do triangulo: ");
    scanf("%f %f %f", &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Todos os lados devem ser maiores que zero!\n");
        return 1;
    }

    if (formaTriangulo(x, y, z)) {
        printf("E um triangulo valido.\n");
        tipoTriangulo(x, y, z);
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
