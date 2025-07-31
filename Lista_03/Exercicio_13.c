void calc_esfera(float R, float *area, float *volume){
    float PI = 3.14159;
    *area = 4 * PI * R * R;
    *volume = (4.0 / 3.0) * PI * R * R * R;
}
int main(){
    float raio, area, volume;

    printf("Raio da Esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);
    printf("Area da superfice: %.2f\n", area);
    printf("Volume da Esfera: %.2f\n", volume);

    return 0;
}
