#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, j, k, somaUm=0;

    int matUm[3][3];
    int matDois[3][3];

    printf("Digite os elementos da Matriz A\n");

    for( i=0 ; i<3 ; i++){
        for( j=0 ; j<3 ; j++){
            scanf("%d", &matUm[i][j]);
        }
    }
    printf("Digite os elementos da Matriz B\n");

    for( i=0 ; i<3 ; i++){
        for( j=0 ; j<3 ; j++){
            scanf("%d", &matDois[i][j]);
        }
    }

    printf("Matriz A | Matriz B\n\n");

    for( i=0 ; i<3 ; i++){
        for( j=0 ; j<3 ; j++){
            printf(" %d ", matUm[i][j]);
        }
        printf(" | ");
        for( k=0 ; k<3 ; k++){
            printf(" %d ", matDois[i][k]);
        }
        printf("\n");
    }

    for( i=0 ; i<3 ; i++){
        for( k=0 ; k<3 ; k++){
            somaUm += matUm[i][k];
            somaUm += matDois[i][k];
        }
    }

    printf("\nSoma total das matrizes: %d\n", somaUm);

    return(0);
}