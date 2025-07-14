float hipotenusa(float a, float b) {
    return sqrt(a * a + b * b);
}


int main(){
    float x,y;

    printf("Digite o valor de a: ");
    scanf("%f", &x);

    printf("Digite o valor de b: ");
    scanf("%f", &y);

    float total = hipotenusa(x,y);
    printf("Valor calculado: %.2f\n",total);

    return 0;
}
