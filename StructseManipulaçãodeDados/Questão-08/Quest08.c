#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char name[30];
    int codigo,quantidade;
    float preco;
}produto;

produto *produto_ = NULL; //array dinamico para armazenar os pedidos
int totalpedidos = 0; //vai ser a quantidade que ele ira armazenar

void cadastro();
void buscar();
void listar();
void option();

//Permita cadastrar, buscar e listar produtos.

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("ESCOLHA UMA OPÇÂO\n\n");
    option();

    return(0);
}

void option(){
    int n;
    printf("CADASTRAR PRODUTO - 1 \n");
    printf("BUSCAR PRODUTO - 2\n");
    printf("LISTAR PRODUTO - 3 \n\n");
    scanf("%d", &n);
    switch(n){
        case 1:
            system("cls");
            cadastro();
            break;
        case 2:
            system("cls");
            buscar();
            break;
        case 3:
            system("cls");
            listar();
            break;
        default:
            printf("ERRO");
            break;
        }
}

void cadastro(){
    produto_ = realloc(produto_ , (totalpedidos + 1) *sizeof(produto));

    if (produto_ == NULL) {
        printf("Erro ao alocar memória para pedidos.\n");
        exit(1);
    }

    printf("\nCADASTRO NOVO PRODUTO\n");
    printf("\nNome: ");
    scanf("%s", produto_[totalpedidos].name);
    printf("\nCodigo: ");
    scanf("%d", &produto_[totalpedidos].codigo);
    printf("\nPreço: ");
    scanf("%f", &produto_[totalpedidos].preco);
    printf("\nQuantidade: ");
    scanf("%d", &produto_[totalpedidos].quantidade);

    totalpedidos++;

    printf("\n\nCadastrado com sucesso.\n");

    printf("\nPressione Enter para continuar...");
    while (getchar() != '\n'); 
    getchar();
    system("cls");
    option();

}

void listar(){
    printf("LISTA DE PRODUTOS\n\n");
    int i;
    if(totalpedidos != 0 ){
        for( i=0 ; i<totalpedidos ; i++){
            printf("\n\nNome: %s", produto_[i].name);
            printf("\nCodigo: %d", produto_[i].codigo);
            printf("\nPreço: %f", produto_[i].preco);
            printf("\nQuantidade: %d", produto_[i].quantidade);

            printf("\nPressione Enter para continuar...");
            while (getchar() != '\n'); 
            getchar();
            system("cls");
            option();
        }
    }
    else{
        printf("Nenhum item na lista");
        printf("\nPressione Enter para continuar...");
        while (getchar() != '\n'); 
        getchar();
        system("cls");
        option();
    }
}


void buscar() {
    int verificador, i;
    int encontrado = 0;

    printf("\nBUSCA DE PRODUTOS\n\n");
    if (totalpedidos != 0) {
        printf("Digite o código do produto: ");
        scanf("%d", &verificador);

        for (i = 0; i < totalpedidos; i++) {
            if (verificador == produto_[i].codigo) {
                printf("\nNome: %s", produto_[i].name);
                printf("\nCódigo: %d", produto_[i].codigo);
                printf("\nPreço: %.2f", produto_[i].preco);
                printf("\nQuantidade: %d", produto_[i].quantidade);
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("\nProduto não encontrado.");
        }
    } else {
        printf("Nenhum produto cadastrado.");
    }

    printf("\nPressione Enter para continuar...");
    while (getchar() != '\n');
    getchar();
    system("cls");
    option();
}
