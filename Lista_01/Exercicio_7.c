int main(){
int numeros[10];
int i,j,temp;

 for(i = 0; i < 10; i++) {
    printf("Numeros: ", i + 1);
    scanf("%d", &numeros[i]);
}
for(i=0;i<9;i++){
    for(j=i+1;j<10;j++){
        if(numeros[i] > numeros[j]){
            temp = numeros[i];
            numeros[i] = numeros[j];
            numeros[j] = temp;
        }
    }
}
for(i=0;i<3;i++){
    printf("%d\n", numeros[i]);
}
printf("\n")
