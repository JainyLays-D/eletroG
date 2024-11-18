#include <stdio.h> 
int main() { 
 int totalalunos, i;
 float nota, soma = 0, media;
 
 printf("informe o total de alunos:");
 scanf("%d", &totalalunos);
 for(i = 1; i<= totalalunos; i++){
    printf("digite a nota do aluno %d:", i);
    scanf("%f", &nota);
    soma += nota;
 }
  media = soma/totalalunos;
  
  printf("a media da turma: %.2f\n", media);
}