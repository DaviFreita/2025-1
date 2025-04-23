#include <stdio.h>

int inverter(int invert);

int main (){
    int num, resultado;

    printf("Digite um numero para inverter: ");
    scanf("%d", &num);
    resultado = inverter(num);
    printf("Numero: %d\n", num);
    printf("Invertido: %d", resultado);

    return(0);
}

int inverter(int invert){
    int d, invertido = 0;
    //uma laço de repeticao, enquanto o numero dado for diferente de zero
    while( invert != 0 ){
        //vai pegar o resto do numero, no caso restaria o ultimo digito
        d = invert%10;
        //aqui vai salvar o digito, para colocar no lugar certo
        //multipla por 10 soma mais (ex: 0 * 10 + 1)
        invertido = invertido * 10 + d ;
        invert /= 10; 
    }
    return(invertido);
}