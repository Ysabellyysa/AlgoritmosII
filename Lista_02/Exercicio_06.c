int segundos(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int main(){
    int hora,min,seg;

    printf("Digite as horas:");
    scanf("%d", &hora);

    printf("Digite as minutos:");
    scanf("%d", &min);

    printf("Digite as segundos:");
    scanf("%d", &seg);

    int total = segundos(hora, min, seg);

    printf("Transformadas em segundos: %d",total);

    return 0;
}
