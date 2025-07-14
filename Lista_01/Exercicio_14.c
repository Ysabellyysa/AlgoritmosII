int principal(){
int ddd[2],num[2];
int i=0;

while (i < 2) {
    printf("Digite o DDD: ");
    scanf("%d", &ddd[i]);

    printf("Digite o numero: ");
    scanf("%d", &num[i]);

    i++;
}
printf("\nNumero Cadastrado\n");
for(i = 0;i<2;i++){
printf("(%d) %d\n", ddd[i],num[i]);
}
