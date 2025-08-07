int main(){
    char *letras;
    int n;

    printf("Tamanho da string: ");
    scanf("%d", &n);

    letras =(char *) malloc((n+1) * sizeof(char));
    if (letras == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Digite a string: ");
    scanf("%s", letras);

    for (int i = 0; letras[i] != '\0'; i++) {
        char c = letras[i];
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){

        printf("\n%c ", c);
    }
}

    free(letras);
 return 0;
}
