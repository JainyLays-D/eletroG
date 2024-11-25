#include <stdio.h> 
#include <math.h>
int main(){

    float capital, jurosmensal, montante;
int periodo, mes;
    printf("capital iniciante: ");
    scanf("%f", &capital);
    printf("taxa de juros (% ao mes):");
     scanf("%f", &jurosmensal);
    printf("periodo (meses): ");
     scanf("%d", &periodo );
     jurosmensal /= 100; // converter para decimal
     for (mes = 1; mes <= periodo; mes++ ){
        montante = capital * pow((1 + jurosmensal ), mes);
        printf("%d° mes: R$ %.2f\n", mes, montante );
        }
        return 0;
     }