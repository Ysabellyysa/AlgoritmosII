int quadrado(int numero) {
    int raiz = sqrt(numero);
    return raiz * raiz == numero;
}

int main() {
    int num;
    scanf("%d", &num);

    if (quadrado(num)) {
        printf("%d e um quadrado perfeito\n", num);
    } else {
        printf("%d nao e um quadrado perfeito\n", num);
    }

    return 0;
}
