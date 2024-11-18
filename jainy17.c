/* ascii.c - exibe a tabela ASCII especifica do seu computador */ 
#include <stdio.h> 
int main() { 
 int c; 
 for(c=33; c<=255; c++){
 printf("(%d,%c) ", c, c);
}
}