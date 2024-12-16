#include <stdio.h>

void dia_da_semana(int dia) {
    switch(dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Numero invalido! Digite um numero entre 1 e 7.\n");
            break;
    }
}

int main() {
    int dia;

    printf("Digite um numero de 1 a 7 para o dia da semana: ");
    scanf("%d", &dia);

    dia_da_semana(dia);

}
