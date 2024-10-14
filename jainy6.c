#include <stdio.h>

int main()
{
    
int totaldepecas, pecasdefeituosas;  
float percentual;

printf("Digite o total de pecas produzidas: "); 
scanf("%d", &totaldepecas);

printf("Digite o total de pecas defeituosas: ");  
scanf("%d", &pecasdefeituosas);

    
percentual = (float) pecasdefeituosas / totaldepecas *100;

if (percentual > 10){   

printf("A maquina precisa de manutencao.\n");
}

else {     
printf("A maquina nao precisa de manutencao.\n");
}

}
