int dobro(int numero) {
    return numero * 2;
}

int main() {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Dobro: %d\n", dobro(x));
    return 0;
}
