#include <stdio.h>
#include <locale.h>

int intersecao(int arrayUm[5], int arraDois[5]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int *arrayUm[5];
    int *arrayDois[5];
    int i;

    printf("Digite os cinco numeros do vetor A: \n");
    for( i=0 ; i<5 ; i++){
        scanf("%d", &arrayUm[i]);
    }

    printf("Digite os cinco numeros do vetor B: \n");
    for( i=0 ; i<5 ; i++){
        scanf("%d", &arrayDois[i]);
    }
    
    intersecao(arrayUm, arrayDois);

    return(0);
}

int intersecao(int arrayUm[5],int arrayDois[5]){
    
    int i,j;

    printf("Numeros iguais: \n");
    
    for( i=0  ; i<5 ; i++ ){

        for( j=0 ; j<5 ; j++){


            if(arrayUm[i]==arrayDois[j]){
                printf("A | %d  ==  %d | B\n",arrayUm[i],arrayDois[j]);
            }
        }
    }

    printf("Numeros pares: \n");

    for( i=0 ; i<5 ; i++){
        if( arrayUm[i] %2 == 0){
            printf("A | %d \n", arrayUm[i]);
        }

        if( arrayDois[i] %2 == 0){
            printf("B | %d \n", arrayDois[i]);
        }
    }

}