#include <stdio.h>
#include <locale.h>

int palindroma(char name[]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    char name[20];

    printf("Digite uma palavra para descobrir se e palindroma: ");
    scanf("%s", name);

    if(palindroma(name)==0){
        printf("É uma palavra palindroma");
    }
    else{
        printf("Não é uma palavra palindroma");
    }
    return(0);
}

int palindroma(char name[]){
    int i, tamanho = strlen(name);

    for(i=0 ; i<tamanho/2 ; i++){
        if(name[i] == name[tamanho-1-i]){
            return(0);
        }
    }
    return 1;
}