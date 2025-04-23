#include <stdio.h>

int potencia(int base, int expoente);

int main(){
    int base,expoente,resultado;

    printf("Digite o numero da base: ");
    scanf("%d", &base);
    printf("Digite o numero do expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);

    printf("Resultado %d", resultado);

    return (0);
}

int potencia(int base, int expoente){
    int i, resultado = 1;
    for( i=0 ; i<expoente ; i++){
        resultado *= base;
    }

    return resultado;
}