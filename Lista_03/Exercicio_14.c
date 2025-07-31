
void nota(float n1, float n2, float *mediaS, float *mediaP){
    *mediaS= (n1 + n2) / 2;
    *mediaP = (n1 + n2 * 2) / 3;
}

int main(){
    float num1, num2;
    float mediaS, mediaP;

    printf("Primeira nota: ");
    scanf("%f", &num1);
    printf("Segunda nota: ");
    scanf("%f", &num2);

    nota(num1, num2, &mediaS, &mediaP);
    printf("Media ponderada: %.2f\n",  mediaP);
    printf("Media simples: %.2f\n", mediaS);


return 0;
}
