#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Digite três números distintos: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Ordenação simples usando comparações.
    if (n1 > n2) { int temp = n1; n1 = n2; n2 = temp; }
    if (n1 > n3) { int temp = n1; n1 = n3; n3 = temp; }
    if (n2 > n3) { int temp = n2; n2 = n3; n3 = temp; }

    printf("Ordem crescente: %d, %d, %d\n", n1, n2, n3);
    

}
