int main(){
    int vet[5];
    int *ptr = vet;

    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", (ptr + i));
    }

    printf("Dobro de cada valor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", 2 * (*(ptr + i)));
    }

    return 0;
}
