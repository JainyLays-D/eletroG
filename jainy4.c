#include<stdio.h>
#include<math.h>

int main(){
    float n1;
    float n2;
    float n3;
    float n4;


    printf ("digite n1:");
    scanf("%f", &n1);
    printf ("digite n2:");
    scanf("%f", &n2);
    printf("digite n3:");
    scanf("%f", &n3);
    printf("digite n4:");
    scanf("%f", &n4);
    float media;

    media = (n1 + n2 + n3 +n4)/4;

    if (media > 4 && media < 7 ){
        printf("O aluno está de exame final");

    }
   
   if(media > 7){
    printf("O aluno está aprovado");

   }
   if(media < 4){
    printf("O aluno está reprovado");
    
   }
}
