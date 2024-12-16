#include <stdio.h>

void contagem_regressiva(int n) {
    
    for (int i = n; i >= 0; i--) {
        printf("%d\n", i); 
    }
}

int main() {
    int numero;

    printf("Digite um numero natural: ");
    scanf("%d", &numero);

    contagem_regressiva(numero);

}
