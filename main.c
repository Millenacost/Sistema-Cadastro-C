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
    int contador= -1;

    system("cls");
    printf("Nome do Atendente: ");
    fflush(stdin); // limpa buffer do teclado
    scanf("%[^\n]s", nome);
    printf("Senha da Loja: ");
    scanf("%d", &op3);


    switch(op3)
    {
    case 123456:
        
        while(op!=5){
            while(op2!=1){

            system("color F4");
            system("cls");

            printf("--------------------------------------------------------------\n \n");
            printf("\t\t\tSeja Bem Vindo, Atendente %s\n", nome);
            printf("_______________________________________________________________\n");
            printf("1-Cadastrar\n");
            printf("2-Exibir dados\n");
            printf("3-Alterar\n");
            printf("4-Excluir\n");
            printf("5-Sair\n");
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
                    scanf("%[^\n]s", CA[contador].nome0);
                    printf("Telefone do Cliente: ");
                    fflush(stdin);
                    scanf("%[^\n]s", CA[contador].nome1);
                    printf("Nome do Produto: ");
                    fflush(stdin);
                    scanf("%[^\n]s", CA[contador].nome2);
                    printf("Código do Produto: ");
                    fflush(stdin);
                    scanf("%[^\n]s", CA[contador].nome3);
                    printf("Preço do Produto: ");
                    fflush(stdin);
                    scanf("%[^\n]s", CA[contador].nome4);
                    printf("\n\n\t\t");
                    system("pause");
                    system("cls");
                break;

                case 2:
                    system("cls");
                    printf("\n\n\t\t\t           INICIANDO CADASTRO\n");
                    printf("\t\t\t      --------------------------\n\n");
                    printf("Nome do Cliente:      %s\n", CA[contador].nome0);
                    printf("Telefone do Cliente:  %s\n", CA[contador].nome1);
                    printf("Nome do Produto:      %s\n", CA[contador].nome2);
                    printf("Código do Produto:    %s\n", CA[contador].nome3);
                    printf("Preço do Produto:     %s\n", CA[contador].nome4);
                    system("pause");
                break;  

                case 3: 
                    system("cls");
                    printf("\n\n\t\t\t           ALTERAR CADASTRO\n");
                    printf("\t\t\t      --------------------------\n\n");
                    printf("1-Nome do Cliente\n");
                    printf("2-Telefone do Cliente\n");
                    printf("3-Nome do Produto\n");
                    printf("4-Código do Produto\n");
                    printf("5-Preço do Produto\n");
                    printf("Qual das opções deseja alterar? \n");
                    scanf("%d", &op1);

                    switch(op1){
                        case 1:
                        system("cls");
                        printf("CADASTRO\n");
                        printf("Alterar Nome do Cliente: ");
                        fflush("stdin");
                        scanf("%[^\n]s", &CA[contador].nome0);
                        printf("Nome alterado com sucesso!\n\t\t");
                        system("pause");
                        break;  

                        case 2:
                        system("cls");
                        printf("CADASTRO\n");
                        printf("Alterar Telefone do Cliente: ");
                        fflush("stdin");
                        scanf("%[^\n]s", &CA[contador].nome1);
                        printf("Telefone alterado com sucesso!\n\t\t");
                        system("pause");
                        break; 

                        case 3:
                        system("cls");
                        printf("CADASTRO\n");
                        printf("Alterar Nome do Produto: ");
                        fflush("stdin");
                        scanf("%[^\n]s", &CA[contador].nome2);
                        printf("Nome alterado com sucesso!\n\t\t");
                        system("pause");
                        break; 

                        case 4:
                        system("cls");
                        printf("CADASTRO\n");
                        printf("Alterar Código do Produto: ");
                        fflush("stdin");
                        scanf("%[^\n]s", &CA[contador].nome3);
                        printf("Código alterado com sucesso!\n\t\t");
                        system("pause");
                        break; 

                        case 5:
                        system("cls");
                        printf("CADASTRO\n");
                        printf("Alterar Preço do Produto: ");
                        fflush("stdin");
                        scanf("%[^\n]s", &CA[contador].nome4);
                        printf("Preço alterado com sucesso!\n\t\t");
                        system("pause");
                        break; 


                    }
                break;

                case 4:
                system("cls");
                printf("\n\n\t\t\t           EXCLUIR CADASTRO\n");
                printf("\t\t\t      --------------------------\n\n");
                printf("1-Nome do Cliente\n");
                printf("2-Telefone do Cliente\n");
                printf("3-Nome do Produto\n");
                printf("4-Código do Produto\n");
                printf("5-Preço do Produto\n");
                printf("6-Excluir todos os dados\n");
                printf("Qual opção você deseja acessar?\n");
                scanf("%d", &op4);

                switch(op4){
                    
                    case 1:
                    system("cls");
                    memset(&CA[contador].nome0, 0 , sizeof(CA[contador].nome0));
                    printf("Nome do Cliente Excluido!\n");
                    system("pause");
                    break;

                    case 2:
                    system("cls");
                    memset(&CA[contador].nome1, 0 , sizeof(CA[contador].nome1));
                    printf("Telefone do Cliente Excluido!\n");
                    system("pause");
                    break;

                    case 3:
                    system("cls");
                    memset(&CA[contador].nome2, 0 , sizeof(CA[contador].nome2));
                    printf("Nome do Produto Excluido!\n");
                    system("pause");
                    break;

                    case 4:
                    system("cls");
                    memset(&CA[contador].nome3, 0 , sizeof(CA[contador].nome3));
                    printf("Código do Produto Excluido!\n");
                    system("pause");
                    break;

                    case 5:
                    system("cls");
                    memset(&CA[contador].nome4, 0 , sizeof(CA[contador].nome4));
                    printf("Preço do Produto Excluido!\n");
                    system("pause");
                    break;

                    case 6:
                    system("cls");
                    memset(&CA[contador].nome0, 0 , sizeof(CA[contador].nome0));
                    memset(&CA[contador].nome1, 0 , sizeof(CA[contador].nome1));
                    memset(&CA[contador].nome2, 0 , sizeof(CA[contador].nome2));
                    memset(&CA[contador].nome3, 0 , sizeof(CA[contador].nome3));
                    memset(&CA[contador].nome4, 0 , sizeof(CA[contador].nome4));
                    printf("Todos dados excluidos com sucesso!\n");
                    system("pause");
                    break;


                }
                break;

                case 5:
                system("cls");
                printf("Você Deseja Realmente Sair do Sistema?\n");
                printf("1 - Sim     2 - Não\n");
                scanf("%d", &op2);
                
                switch(op2){
                    case 1:
                    system("cls");
                    printf("Acesso Finalizado com Sucesso!\n");
                    system("pause");
                    return 0;
                    break;
                }

            }
        }
        break;
    
    default:
        printf("Opção Inválida!");
        break;
        }
    }

    























}