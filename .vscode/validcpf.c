#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// algoritmo para validacao de cpf
int validaCPF(char vetor[]){
    int cpf, soma = 0, num = 10, resto, i,j;

    //verifica se todos caracteres sao iguais=invalido
    int iguais = 0;
    for(i=0;i<=10;i++){
        if(vetor[0]==vetor[i]){
            iguais++;
        }
    }
    if(iguais==11) return 0;


    if(strlen(vetor)==11){ //quantidade de numeros valido 

    for (i = 0; i<=8; i++){ // 1 validacao
        cpf = vetor[i] - '0';
        soma = soma + cpf*num;
        num--;
    }
    resto = (soma*10) % 11;
    cpf = vetor[9] - '0';
    if(resto==cpf){ // 2 validacao
        soma = 0;
        num = 11;
        for (i = 0; i<=9; i++){
            cpf = vetor[i] - '0';
            soma = soma + cpf*num;
            num--;
        }
        resto = (soma*10) % 11;
        cpf = vetor[10] - '0';
        if(resto==cpf){
            return 1; //valido
        }
    }else{

        return 0; // invalido
    }
    }else{
        return 0; 
    }

}

int main(){

   char cpf[12];
    printf("CPF do Cliente: ");
    fflush(stdin);
    fgets(cpf, 12, stdin);
    int valido = validaCPF(cpf);
    printf("%d", valido);

      
   /* char vetor[12];
    printf("Digite o CPF: ");
    scanf("%s", &vetor);

    int valido = validaCPF(vetor);
    printf("%d", valido);

    
    char vetor[11] = "17071804745";
    int soma = 0;
    int cpf, num=10;
    for (int i= 0; i<=8;i++){
        cpf = vetor[i] - '0';
        soma = soma + cpf*num;
        num--;
    }
    printf("soma = %d\n resto = %d", soma, soma*10%11, vetor[10]);
*/
   
    
    system("pause");
    return 0;
}