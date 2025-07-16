void num(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    num(n);

    return 0;
}
