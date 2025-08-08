int main() {
    int loteria[6], bilhete[6];
    int i, j, acertos = 0;
    int *numeros;

    printf("Digite os 6 numeros sorteados:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &loteria[i]);
    }

    printf("Digite os 6 numeros do seu bilhete:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &bilhete[i]);
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (bilhete[i] == loteria[j]) {
                acertos++;
                break;
            }
        }
    }

    numeros = (int *) malloc(acertos * sizeof(int));
    int k = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (bilhete[i] == loteria[j]) {
                numeros[k] = bilhete[i];
                k++;
                break;
            }
        }
    }
    printf("\nNumeros sorteados: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", loteria[i]);
    }
    printf("\nNumeros corretos: ");
    for (i = 0; i < acertos; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros);

    return 0;
}
