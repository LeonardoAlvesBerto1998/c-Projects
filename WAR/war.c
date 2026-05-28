#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para strcspn()

#define MAX_TERRITORIOS 5 // Definindo a quantidade de territórios

//====Definindo a estrutura====//
typedef struct{

    char nome[30];
    char cor[10];
    int tropas;

}Territorio;

//====Função para limpar o buffer de entrada====//
void limparBufferEntrada(){   //limpa caracteres sobrando no teclado
    int c;
    while((c = getchar()) != '\n' && c != EOF); //lê os caracteres até encontrar quebra de linha ou fim de arquivo (EOF)
}

int main(){

    Territorio territorios[MAX_TERRITORIOS];
    
    printf("=========================================================\n");
    printf("Vamos cadastrar os 5 territórios iniciais do nosso mundo.\n");
    printf("=========================================================\n\n");


    for(int i = 0; i < MAX_TERRITORIOS ; i++){
        printf("---Cadastro do território %d\n---", i+1);

        printf("Nome do Território %d\n: ", i);
        fgets(territorios[i].nome, 30, stdin);
        //scanf("%s", territorios[i].nome);

        printf("Cor do exército %d: ",i);
        fgets(territorios[i].cor, 10, stdin);
        //scanf("%s", territorios[i].cor);

        printf("Número de tropas do exército %d: ",i);
        scanf("%d", &territorios[i].tropas);        //& = endereço de memória

        limparBufferEntrada();

        printf("\n");
    }

//====Exibição====//

printf("=======================\n");
printf("Territórios cadastrados.\n");
printf("=======================\n\n");

for(int i = 0; i < MAX_TERRITORIOS; i++){
    printf("---------------");
    printf("Território %d:\n", i+1);
    printf("Nome: %s\n", territorios[i].nome);
    printf("Cor: %s\n", territorios[i].cor);
    printf("Tropas: %d\n", territorios[i].tropas);
    printf("---------------");

}

return 0;
}


