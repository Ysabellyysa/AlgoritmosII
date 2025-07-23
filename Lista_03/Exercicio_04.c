void troca(int *x, int *y){
    int temp;
    if(*x < *x){
        temp = *x;
        *x = *y;
        *y = temp;
    }
}
int main(){
    int a = 2;
    int b = 3;

    printf("a = %d, b = %d\n", a, b);
    troca(&a, &b);
    printf("b = %d, a = %d\n", a, b);

    return 0;
}
