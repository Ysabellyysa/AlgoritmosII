int main(){
int matriz[4][5];
int menor;
int linha = 0, coluna = 0;

printf("Digite os valores da matriz:\n");
for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 5; j++) {
        scanf("%d", &matriz[i][j]);
    }
}
menor = matriz[0][0];
for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 5; j++) {
        if(matriz[i][j] < menor) {
            menor = matriz[i][j];
            linha = i;
            coluna= j;
        }
    }
}
printf("Menor valor: %d\n", menor);
printf("Posicao: linha %d, coluna %d\n", linha + 1, coluna + 1)
