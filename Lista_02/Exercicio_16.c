void linha(int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("=");
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite quantidade de sinais: ");
    scanf("%d", &n);

    linha(n);

    return 0;
}
