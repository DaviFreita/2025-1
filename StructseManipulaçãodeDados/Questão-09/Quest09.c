#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct{
    char name[30];
    double number;
}contactS;

contactS *contact = NULL;
int amount = 0;

void registerS();
void search();
void list();

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");

    while(1){
        system("cls");
        printf("--------------------------");
        printf("\n\t\033[4;1mCONTACT BOOK\033[0m");
        printf("\n--------------------------");
        printf("\nRegister contact    - 1");
        printf("\nSearch for contact  - 2");
        printf("\nContact list        - 3");
        printf("\n--------------------------");
        printf("\nChoose an option: ");
        scanf("%i", &num);

        switch(num){
            case 1:
                system("cls");
                registerS();
            break;
            case 2:
                system("cls");
                search();
            break;
            case 3:
                system("cls");
                list();
            break;
            default:
                printf("\n\033[1mINVALID OPTION!\033[0m\n");
                system("pause");
            break;
        }
    }

    return(0);
}

void registerS(){
    contactS *temp = realloc(contact, (amount + 1) * sizeof(contactS));
    if (temp == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }
    contact = temp;
    printf("\n\t\033[4;1m New contact \033[0m\n");
    printf("\n\033[1m Name: \033[0m");
    scanf("%s", &contact[amount].name);
    printf("\n\033[1m Number: \033[0m");
    scanf("%lf", &contact[amount].number);
    printf("\n\nContact added successfully\n");
    system("pause");
    amount++;
}

void search(){
    char attorney[40];
    int i,k=0;

    if(amount!=0){
        printf("\n\t\033[4;1m CONTACT LIST\033[0m\n");
        printf("Search: ");
        scanf("%s", attorney);
        for( i=0 ; i<amount ; i++){
            if(strcmp(attorney, contact[i].name) == 0){
                printf("\nName: %s\nNumber: %.lf\n",contact[i].name,contact[i].number);
                k++;
            }
        }
        if(k==0){
            printf("\nNot Found!\n");
        }
    }
    else{
        printf("\n\tEMPTY LIST \n");
    }
    system("pause");
}

void list(){
    int i;
    printf("\n\t\033[4;1m LIST CONTACT \033[0m\n");
    if(amount != 0){
        for( i=0 ; i<amount ; i++){
            printf("\n\033[1mName:\033[0m %s\n\033[1mNumber:\033[0m %.lf\n", contact[i].name, contact[i].number);
        }
    }
    else{
        printf("\n\tEMPTY LIST \n");
    }
    system("pause");
}