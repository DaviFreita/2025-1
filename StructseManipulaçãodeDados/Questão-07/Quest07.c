#include <stdio.h>
#include <locale.h>

typedef struct{
    char nome[30];
    int matricula;
    float media;
}aluno;

aluno *aluno_ = NULL;
int n = 0; 

void registerS();
float notas();
void alun();

int main(){
    int num;

    setlocale(LC_ALL, "Portuguese");

    while(1){
        system("cls");
        printf("---------------------------------\n\n Registrar Aluno   - 1\n Alunos            - 2\n\n---------------------------------\n");
        printf("Escolha uma opção: ");
        scanf("%d", &num);
        switch(num){
            case 1:
                system("cls");
                registerS();
            break;
            case 2:
                system("cls");
                alun();
            break;
            default:
                system("cls");
                printf("\nDigito incorreto, tente novamente.\n");
            break;  
        }
    }

    return(0);
}

void registerS(){

    float media;

    aluno_ = realloc(aluno_, (n + 1) *sizeof(aluno));
    printf("------------------------");
    printf("\n\nNome do ALuno: ");
    scanf("%s", aluno_[n].nome);
    printf("Matricula: ");
    scanf("%d", &aluno_[n].matricula);
    media = notas();    
    aluno_[n].media=media;
    printf("\nAluno registrado!\n");

    n++;

    system("pause");

}

float notas(){
    float m, n, o;
    printf("Primeira Nota: ");
    scanf("%f", &m);
    printf("Segunda Nota: ");
    scanf("%f", &n);
    printf("Terceira Nota: ");
    scanf("%f", &o);

    o=((m+n+o)/3);
    return(o);
}

void alun(){
    int i;
    if(n>0){
        printf("-----------------------");
        printf("\n\nAprovados\n\n");
        printf("-----------------------");
        for( i=0 ; i<n ; i++){
            if(aluno_[i].media>=7){
                printf("\nNome: %s", aluno_[i].nome);
                printf("\nMatricula: %d", aluno_[i].matricula);
                printf("\nMedia: %f\n", aluno_[i].media);
            }
        }
        printf("\n-----------------------");
        printf("\n\nReprovados\n\n");
        printf("-----------------------");
        for( i=0 ; i<n ; i++){
            if(aluno_[i].media<7){
                printf("\nNome: %s", aluno_[i].nome);
                printf("\nMatricula: %d", aluno_[i].matricula);
                printf("\nMedia: %f\n", aluno_[i].media);
            }
        }
        printf("-----------------------");
    }
    else{
        printf("\nNenhum aluno regitrado.\n");
    }
    system("pause");
}