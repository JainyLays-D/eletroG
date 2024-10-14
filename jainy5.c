#include<stdio.h>
#include<math.h>

int main(void)
{
int quantidadedefolhas;
float totalaserpago;

printf ("coloque a quantidade de folhas:");
scanf("%d", &quantidadedefolhas);

if(quantidadedefolhas > 100)
{
 totalaserpago = quantidadedefolhas*0.20;
 printf ("total a ser pago: R$ %.2f\n\n\n", totalaserpago);
}

else{
totalaserpago = quantidadedefolhas*0.25;
printf ("total a ser pago: R$ %.2f\n\n\n", totalaserpago);
}


}