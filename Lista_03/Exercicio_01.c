#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'M';

    int *pI = &inteiro;
    float *pF = &real;
    char *pC = &caractere;

    printf("Antes:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    *pI = 20;
    *pF = 6.28;
    *pC = 'Y';

    printf("\nDepois:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    return 0;
}
