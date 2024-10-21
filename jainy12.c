#include <stdio.h>

int main(){
    
    int operacao;
    printf("Digite a operação (1-Saldo, 2-Extrato, 3-Saque, 4-Sair): ");
    scanf("%d", &operacao);

    switch (operacao){
        case 1:
            printf("Saldo\n");
            break;

        case 2:
            printf("Extrato\n");
            break;

        case 3:
            printf("Saque\n");
            break;

        case 4:
            printf("Sair\n");
            break;
        default:
            printf("Opção inválida\n");
    }
}