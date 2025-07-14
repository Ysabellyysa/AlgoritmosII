int main(){
int matriz[5][5];
int SL[5] = {0};
int SC[5] = {0};

printf("Valores da matriz:\n");
for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
        scanf("%d", &matriz[i][j]);
        SL[i] += matriz[i][j];
        SC[j] += matriz[i][j];
    }
}
for(int i = 0; i < 5; i++) {
    printf("SL[%d] = %d\n", i + 1, SL[i]);
}

for(int j = 0; j < 5; j++) {
    printf("SC[%d] = %d\n", j + 1, SC[j]);
}
