#include <stdio.h>
int main(){
    int totaleleitores, votos_a = 0, votos_b = 0, votos_c = 0, i;
    char votos;
    printf("total de eleitores:");
    scanf("%d", &totaleleitores);
    for(i =1; 1 <= totaleleitores; i++){
        printf("voto do %d eleitor(A, B ou C): ", i);
        scanf("%c", &votos);
        if(votos == 'A' || votos == 'a'){
            votos_a++;
           } 
           else if(votos == 'B' || votos == 'b'){
            votos_b++;
           } 
           else if(votos == 'C' || votos == 'c'){
            votos_c++;
           }
           else{
            printf("voto invalido\n");
           }
    }
    printf("candidato A: %d votos\n", votos_a);
     printf("candidato B: %d votos\n", votos_b);
      printf("candidato C: %d votos\n", votos_c);
}