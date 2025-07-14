float graus(float celsius) {
    return celsius * (9.0 / 5.0) + 32.0;
}

int main(){
    float num;

    printf("Digite os graus em Celsius: ");
    scanf("%f", &num);

    float total = graus(num);
    printf("Transformadas em graus Fahrenheit: %2.f\n",total);

    return 0;
}
