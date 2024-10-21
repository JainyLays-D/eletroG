#include <stdio.h>

int main(){

    char sexo;
    float altura, pesoIdeal;

    printf("Digite seu sexo (M/F) e altura: ");
    scanf(" %c %f", &sexo, &altura);

    if (sexo == 'M'){
        pesoIdeal = 72.7 * altura - 58;
    } 
    else if (sexo == 'F'){
        pesoIdeal = 62.1 * altura - 44.7;
    } 
    else{
        printf("Sexo invalido\n");
        return 1;
    }

    printf("Peso ideal: %.2f\n", pesoIdeal);
}