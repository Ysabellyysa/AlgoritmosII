int main(){
char opcao;
printf("Estado civil (C,S,V ou D):");
scanf("%c", &opcao);

switch(opcao){
case 'C':
    printf("Indicacao: Caramel Sweet & Salt");
    break;
case 'S':
    printf("Indicacao: London Pub");
    break;
case 'V':
    printf("Indicacao: XI Baile da Melhor Idade");
    break;
case 'D':
    printf("Indicacao: Academia Smart Fit");
    break;
default:
    printf("Erro!");

}
