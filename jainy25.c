#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int x, int y) {
    return (x * y) / mdc(x, y);
}

int main() {
    int x, y;

    printf("Digite o intervalo de horas do primeiro alarme (x): ");
    scanf("%d", &x);
    printf("Digite o intervalo de horas do segundo alarme (y): ");
    scanf("%d", &y);

    if (x <= 0 || y <= 0) {
        printf("Os valores de x e y devem ser numeros inteiros positivos.\n");
        return 1; 
    }

    int tempo_minimo = mmc(x, y);
    printf("O tempo minimo para que ambos alarmes disparem simultaneamente e: %d horas\n", tempo_minimo);

    return 0;
}
