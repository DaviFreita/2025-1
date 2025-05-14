#include <stdio.h>
#include <locale.h>

int somaDiagonal(int matriz[4][4]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
                       

    int res = somaDiagonal(matriz);
    printf("\nSoma da Diagonal Principal: %d", res);
    return (0);
}

int somaDiagonal(int matriz[4][4]){
    int i, soma=0;

    for( i=0 ; i<4 ; i++ ){
        soma+=matriz[i][i];
    }
    return(soma);
}