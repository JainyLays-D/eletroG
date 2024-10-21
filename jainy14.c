#include <stdio.h>

int main(){
    int ano, soma, resto;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);
    
    soma = (ano / 100) + (ano % 100);
    resto = soma % 5;
    
    switch (resto) {
        case 0:
            printf("Perfil: Tímido\n");
            break;
            
        case 1:
            printf("Perfil: Sonhador\n");
            break;

        case 2:
            printf("Perfil: Paquerador\n");
            break;

        case 3:
            printf("Perfil: Atraente\n");
            break;

        case 4:
            printf("Perfil: Irresistível\n");
            break;
    }
}