scanf("%f", &altura);

if(altura <= 1.50){
    printf("O individuo eh: muito baixo");
}else if(altura <= 1.60){
    printf("O individuo eh: baixo");
}else if (altura <= 1.80){
    printf("O individuo eh: mediano");
}else if (altura >= 1.80){
    printf("O individuo eh: alto");
}
