#include <stdio.h>

int main(){
int idade;

printf("coloque a idade do nadador");
scanf("%d", &idade);

if(idade<=10){

    printf("categoria:infantil\n");
}
     else if (idade <= 17) {
        printf("Categoria: Juvenil\n");
    } else {
        printf("Categoria: Sênior\n");
    }
}

