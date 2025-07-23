void dobro(int *a, int *b){
      *a = *a * 2;
      *b = *b * 2;
    return;
}
int main(){
    int x = 5;
    int y = 10;

    dobro(&x,&y);
    printf("Dobro de X: %d\n", x);
    printf("Dobro de Y: %d\n", y);

    return 0;
}
