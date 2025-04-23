#include <stdio.h>
#include <locale.h>

//array para armazenar os dez numeros
int arr[10];

//array para ver se os numeros ja foi ou nao contados
int conf[10]={0,0,0,0,0,0,0,0,0,0};

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, j ,c;

    //loop para ler e armazenar os numeros
    for( i=0 ; i<10 ; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &arr[i]);
    }

    //loop para contar os numeros
    for( i=0 ; i<10 ; i++){
        c=1;

        //se o verificador for igual a zero
        if(conf[i]==0){
            //loop para contar os numeros iguais
            for( j=i+1 ; j<10 ; j++){
                //exemplo: se array[0] for igual o array[1], irei adicionar no contador do numero(c++), e falar que o verificador do array[1] ja foi contado
                if(arr[i]==arr[j]){
                    c++;
                    conf[j]=1;
                }
            }
            //ira imprimir o numero e as repetição
            printf("\nNúmero: %d  Repetição: %d", arr[i], c);
            conf[i]=1;
        }
    }


    return (0);
}