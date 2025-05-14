#include <locale.h>
#include <stdio.h.>

int buscaBinaria(int num, int vetor[], int tamanho);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[] = {10,12,16,18,24,30,60,82,94,100};
    int num;
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    printf("Digite o numero: ");
    scanf("%i", &num);
    int resp = buscaBinaria(num,vetor,tamanho);
    if(vetor[resp] == num && resp != -1){
        printf("Valor requerido: %d\n", num);
        printf("Localização: %d\n", resp);
    }
    else{
        printf("Numero inexistente no banco de dados.\n");
    }
    return(0);
}

int buscaBinaria(int num, int vetor[], int tamanho){
    int inicio = 0;
    int fim = tamanho-1;
    while(inicio<=fim){
        int meio = (inicio+fim)/2;

        if(vetor[meio] == num){
            return(meio);
        }
        else if(num>vetor[meio]){
            inicio=meio + 1;
        }
        else{
            fim=meio - 1;
        }
    }
    
    return -1;
}