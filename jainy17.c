/* ascii.c - exibe a tabela ASCII especifica do seu computador */ 
#include <stdio.h> 
int main(void) { 
 int c; 
 for(c=0; c<=255; c++) 
 printf("(%d,%c) ", c, c); 
 return 0; 
}