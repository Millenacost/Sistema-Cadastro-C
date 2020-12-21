#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cliente {
    char nome0[100]; // nome do cliente
    char nome1[100]; // telefone do cliente 
    char nome2[100];  // nome do produto
    char nome3[100];   // codigo do produto
    char nome4[100];   // preco do produto
    struct cliente *prox;
}CLista;

CLista* cadastro_cli(CLista *lst){
    CLista *novo;
    novo =  (CLista*)malloc(sizeof(CLista));
    printf("Nome do Cliente: ");
    fflush(stdin);
    fgets(novo->nome0, 100, stdin);
    printf("Telefone do Cliente: ");
    fflush(stdin);
    fgets(novo->nome1, 100, stdin);
    printf("Nome do Produto: ");
    fflush(stdin);
    fgets(novo->nome2, 100, stdin);
    printf("Codigo do Produto: ");
    fflush(stdin);
    fgets(novo->nome3, 100, stdin);
    printf("Preco do Produto: ");
    fflush(stdin);
    fgets(novo->nome4, 100, stdin);

    novo->prox = NULL;

    if (lst==NULL) { // se lista de clientes estiver vazia
        lst = novo;
    } else {
        CLista *aux = lst;
        while(aux->prox!=NULL) aux = aux->prox; // procuro ultimo no
        aux->prox = novo; // ultimo cliente aponta para o novo
    }
    return lst;
}

void exibir_cli(CLista *lst){
    if (lst==NULL) {
        printf("Nao ha clientes cadatrados!\n");
        return;
    }
    char nome[100];
    system("cls");
    printf("Nome do Cliente: ");
    fflush(stdin);
    fgets(nome, 100, stdin);
    CLista *aux = lst;
    
    int valor = strcmp(aux->nome0,nome);
    while(valor!=0 && aux!=NULL){
        aux = aux->prox;
        if (aux!=NULL)valor = strcmp(aux->nome0,nome);
    }
    if (aux==NULL && valor!=0){
        printf("Usuario nao encontrado!\n");
        return;
    }
    system("cls");
    printf("Nome do Cliente:      %s\n", aux->nome0);
    printf("Telefone do Cliente:  %s\n", aux->nome1);
    printf("Nome do Produto:      %s\n", aux->nome2);
    printf("Codigo do Produto:    %s\n", aux->nome3);
    printf("Preco do Produto:     R$%s\n", aux->nome4);
    return;
}

CLista* alterar_cli(CLista *lst, int op, char nome[]){
    CLista *aux = lst;
    int valor = strcmp(aux->nome0,nome);
    while(valor!=0 && aux!=NULL){
        aux = aux->prox;
        valor = strcmp(aux->nome0,nome);
    }
    if (aux==NULL && valor!=0){
        printf("Usuario nao encontrado!\n");
        return lst;
    }
    switch(op){
        case 1:
        system("cls");
        printf("CADASTRO\n");
        printf("Novo nome do Cliente: ");
        fflush(stdin);
        fgets(aux->nome0, 100, stdin);
        printf("Nome alterado com sucesso!\n\t\t");
        system("pause");
        break;  

        case 2:
        system("cls");
        printf("CADASTRO\n");
        printf("Novo Telefone do Cliente: ");
        fflush(stdin);
        fgets(aux->nome1, 100, stdin);
        printf("Telefone alterado com sucesso!\n\t\t");
        system("pause");
        break; 

        case 3:
        system("cls");
        printf("CADASTRO\n\n");
        printf("Novo nome do Produto: ");
        fflush(stdin);
        fgets(aux->nome2, 100, stdin);
        printf("Nome alterado com sucesso!\n\t\t");
        system("pause");
        break; 

        case 4:
        system("cls");
        printf("CADASTRO\n");
        printf("Novo Codigo do Produto: ");
        fflush(stdin);
        fgets(aux->nome3, 100, stdin);
        printf("Codigo alterado com sucesso!\n\t\t");
        system("pause");
        break; 

        case 5:
        system("cls");
        printf("CADASTRO\n");
        printf("Novo Preco do Produto: ");
        fflush(stdin);
        fgets(aux->nome4, 100, stdin);
        printf("Preço alterado com sucesso!\n\t\t");
        system("pause");
        break;
    }  
    return lst;   
}

CLista* remove_cli(CLista *lst){ // remove todos clientes alocados
    CLista *aux1 = lst;
    CLista *aux2;
    
    while(aux1!=NULL){
        aux2 = aux1;
        aux1 = aux1->prox;
        free(aux2);
    }
    lst = NULL;
    printf("Cadastros excluidos com sucesso!\n");
    return lst;
}

int main(void){
    int op, op1, op2, op3, op4;
    char nome[100];
 
    CLista *clientes = NULL; // criei uma lista vazia


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
            printf("\t  Seja Bem Vindo, Atendente %s\n", nome);
            printf("_______________________________________________________________\n");
            printf("1-Cadastrar\n");
            printf("2-Exibir dados\n");
            printf("3-Alterar\n");
            printf("4-Excluir\n");
            printf("5-Sair\n");
            printf("--------------------------------------------------------------\n \n");
            printf("Qual das opcoes deseja acessar? ");
            scanf("%d", &op);

            switch(op){
                case 1:
                    system("cls");
                    printf("\n\n\t\t\t           INICIANDO CADASTRO\n");
                    printf("\t\t\t      --------------------------\n\n");
                    clientes = cadastro_cli(clientes);
                    printf("\n\n\t\t");
                    system("pause");
                    system("cls");
                break;

                case 2:
                    system("cls");
                    printf("\n\n\t\t\t           EXIBIR CADASTRO\n");
                    printf("\t\t\t      --------------------------\n\n");
                    exibir_cli(clientes);
                    system("pause");
                break;  

                case 3:
                    if (clientes!=NULL){ 
                    
                    char cliente[100];
                    system("cls");
                    printf("--------------------------------------------------------------\n \n");
                    printf("Nome do Cliente: ");
                    fflush(stdin);
                    fgets(cliente, 100, stdin);
                    printf("--------------------------------------------------------------\n \n");
                    printf("\n\n\t\t\t           ALTERAR CADASTRO\n");
                    printf("\t\t\t      --------------------------\n\n");
                    printf("1-Nome do Cliente\n");
                    printf("2-Telefone do Cliente\n");
                    printf("3-Nome do Produto\n");
                    printf("4-Codigo do Produto\n");
                    printf("5-Preco do Produto\n");
                    printf("Qual das opcoes deseja alterar? \n");
                    scanf("%d", &op1);
                    clientes = alterar_cli(clientes,op1,cliente);
                    } else {
                        system("cls");
                        printf("Nao ha clientes cadastrados!\n");
                    }
                    system("pause");
                    
                break;

                case 4:
                system("cls");
                printf("\n\n\t\t\t           EXCLUIR CADASTRO\n");
                printf("\t\t\t      --------------------------\n\n");
                clientes = remove_cli(clientes);
                system("pause");
                break;


           /*     case 4:
                system("cls");
                printf("\n\n\t\t\t           EXCLUIR CADASTRO\n");
                printf("\t\t\t      --------------------------\n\n");
                printf("1-Nome do Cliente\n");
                printf("2-Telefone do Cliente\n");
                printf("3-Nome do Produto\n");
                printf("4-Codigo do Produto\n");
                printf("5-Preco do Produto\n");
                printf("6-Excluir todos os dados\n");
                printf("Qual opcao voce deseja acessar?\n");
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
*/
                case 5:
                system("cls");
                printf("Voce Deseja Realmente Sair do Sistema?\n");
                printf("1 - Sim     2 - Nao\n");
                scanf("%d", &op2);
                
                switch(op2){
                    case 1:
                    system("cls");
                    printf("Acesso Finalizado com Sucesso! Volte Sempre!\n");
                    system("pause");
                    return 0;
                    break;
                }

            }
        }
        break;
    
    default:
        printf("Opcao Invalida!");
        break;
        }
    }

    























}