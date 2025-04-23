#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main(){
    int prim, ult;

    printf("Digite dois numeros para saber quais vao ser primos:\n");
    scanf("%d %d", &prim, &ult);
    int n;
    for(n = prim ; n<=ult ; n++){
        if(ehPrimo(n)){
                printf("Numeros primos: %d\n", n);
        }
    }
    return (0);
}

bool ehPrimo(int n){
    if(n<=1) return false;
        else if(n==2) return true;
            else{
                int i;
                for(i = 2 ; i * i <=n ;i++){
                    if(n%i==0) return false;
                }
            }        

    return true;
}