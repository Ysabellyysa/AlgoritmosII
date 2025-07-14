int principal(){
int i;
printf("FOR:");
for(i = 10; i>=0; i-- ){
    printf("%d..", i);
}
printf("FIM \n");

printf("WHILE:");
i = 10;
while (i >= 0){
    printf("%d..", i);
    i--;
}
printf("FIM \n");

printf("DO..WHILE:");
i = 10;
do{
    printf("%d..", i);
    i--;
}while(i >= 0);

printf("FIM \n");
