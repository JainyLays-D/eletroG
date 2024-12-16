#include <stdio.h>
#include <math.h>

int ehtriangular(int n){
    double delta = 1 + 8 *n;
    if(delta<0) return 0;
    
    double raiz = sqrt(delta);
    int k = (-1 + raiz)/2;
    return (k * (k + 1)/2 == n);
}
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if( ehtriangular (num)){
        printf("%d e um numero triangular.\n", num);
    }
    return 0;
}