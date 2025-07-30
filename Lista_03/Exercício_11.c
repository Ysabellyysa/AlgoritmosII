int main(){
    int vet[5];
    int *ptr = vet;

    printf("Digite 5 valores:\n");
    for(int i=0;i<5;i++){
        scanf("%d", (ptr + i));
    }

    for(int i=0;i<5;i++){
        if(*(ptr + i) % 2 == 0 ){
            printf("Endereco dos pares vet[%d]: %p\n", i + 2,(ptr + i));
        }

    }
    return 0;
}
