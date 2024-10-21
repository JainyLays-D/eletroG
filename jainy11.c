#include <stdio.h>

int main() {
  char estados;

printf("digite a letra: ");
scanf("%c", &estados);


  if (estados =='S'){
    printf("Ela sera solteira");
  }

  if (estados =='C'){
    printf("Ela sera casada");
  }

if (estados =='D'){
    printf("Ela sera divorciada");
}
if (estados == 'V'){
  printf("Ela sera viuva");
}

}