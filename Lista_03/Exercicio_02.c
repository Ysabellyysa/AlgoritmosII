int main(){
    int x;
    int y;

    int *p1 = &x;
    int *p2 = &y;

    printf("Endereço de X: %p\n ", p1);
    printf("Endereço de Y: %p\n ", p2);

    if(p1 > p2){
        printf("O maior endereco e de X : %p\n", p1);
    }else if (p2 > p1){
        printf("O maior endereco e de Y : %p\n", p2);
    }else{
        printf("Endereços parecidos\n");
    }
    return 0;
}
