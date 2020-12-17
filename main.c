#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome0[100];
    char nome1[100];
    char nome2[100];
    char nome3[100];
    char nome4[100];

}Cadastro;

int main(void){
    int op, op1, op2, op3, op4;
    char nome[100];
    Cadastro CA[100];
    int contador=0;

    system("cls");
    printf("Nome do Atendente: ");
    fflush(stdin); // limpa buffer do teclado
    scanf("%[^\n]s", nome);
    printf("Senha da Loja: ");
    scanf("%d", &op3);


    switch(op3)
    {
    case 123456:
        
        while(op!=6){
            system("color F4");
            system("cls");

            printf("--------------------------------------------------------------\n \n");
            printf("\t\t\tSeja Bem Vindo, Atendente %s\n", nome);
            printf("_______________________________________________________________\n");
            printf("1-Cadastrar\n");
            printf("2-Exibir dados\n");
            printf("3-Alterar\n");
            printf("4-Excluir\n");
            printf("5-Informações do Sistema\n");
            printf("6-Sair\n");
            printf("--------------------------------------------------------------\n \n");
            printf("Qual das opções deseja acessar? ");
            scanf("%d", &op);

            switch(op){
                case 1:
                    contador++;
                    system("cls");
                    printf("\n\n\t\t\t           INICIANDO CADASTRO\n");
                    printf("\t\t\t      --------------------------\n\n");
                    printf("Nome do Cliente: ");
                    fflush(stdin);
                    scanf("%[^\n]s", CA[contador]->nome0);
            }
        }


        break;
    
    default:
        break;
    }

    























}