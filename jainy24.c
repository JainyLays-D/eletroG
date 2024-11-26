#include <stdio.h>
#include <string.h>

int somaponderada(char numero[]){
    int soma = 0;
    int n = strlen(numero);
    for(int i =0; i < n; i++){
        soma += (numero [i] - '0') * ( i + 1);
    }
    return soma;
}
int soma(){
    char numero [20];
    printf(" Digite um numero: ");
    scanf("%s", numero );

    int resultado = somaponderada(numero);
    printf("soma ponderada: %d\n", resultado);
    
    return 0;
}