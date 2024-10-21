#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite dois numeros e a operacao (+, -, *, /): ");
    scanf("%f %f %c", &num1, &num2, &operacao);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;

        case '-':
            resultado = num1 - num2;
            break;

        case '*':
            resultado = num1 * num2;
            break;

        case '/':
            resultado = num1 / num2;
            break;
        default:
            printf("Operacao invalida\n");
            return 1;
    }
    printf("Resultado: %.2f\n", resultado);
}